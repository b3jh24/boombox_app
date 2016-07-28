/*
 */

#include "PracticalSocket.h"  // For Socket, ServerSocket, and SocketException
#include <iostream>           // For cerr and cout
#include <cstdlib>            // For atoi()
#include <string.h>
#include <stdint.h>
#include <arpa/inet.h>
#include "src_gen/Boombox_HTLx_Messaging.pb.h"


using namespace std;


const unsigned int RCVBUFSIZE = 32;    // Size of receive buffer
uint32_t schemaVersion;

void HandleTCPClient(TCPSocket *sock); // TCP client handling function

int verifySchema(uint32_t clientSchemaVersion, uint32_t localSchemaVersion);	//Function to verify schema versions


int main(int argc, char *argv[]) {
	if (argc != 3) {                     // Test for correct number of arguments
		cerr << "Usage: " << argv[0] << "<Address> <Server Port>" << endl;
		exit(1);
	}

	cerr << "STUFF";
	int echoServPort = atoi(argv[2]);  // Second arg: local port
	cout << "Address: " << argv[1] << endl;
	cout << "Port: " << echoServPort << endl;

	HTL_Messaging_schema1::SchemaAgreement schema;
	schemaVersion = schema.schemaversion();

	try {
		TCPServerSocket servSock(echoServPort);     // Server Socket object

		for (;;) {   // Run forever
			HandleTCPClient(servSock.accept());  // Wait for a client to connect
		}
	} catch (SocketException &e) {
		cerr << e.what() << endl;
		exit(1);
	}
	// NOT REACHED

	return 0;
}

// TCP client handling function
void HandleTCPClient(TCPSocket *sock) {
	cout << "Handling client ";
	try {
		cout << sock->getForeignAddress() << ":";
	} catch (SocketException e) {
		cerr << "Unable to get foreign address" << endl;
	}
	try {
		cout << sock->getForeignPort();
	} catch (SocketException e) {
		cerr << "Unable to get foreign port" << endl;
	}
	cout << endl;

	//Continue to receive message for as long as something is sent.
	//We receive the data in network byte order, but then must convert it back to host byte order (hence the ntohl) to get the original message
	uint32_t message;
	int recvMsgSize;
	bool beginTransfer;
	while ((recvMsgSize = sock->recv(&message, RCVBUFSIZE)) > 0) { // Zero means
																   // end of transmission
		//Receive schema version and convert from network byte order to host byte order
		uint32_t clientSchema = ntohl(message);
		cout << "The message was: " << message << endl;
		cout << "Client schema: " << clientSchema << endl;
		if(verifySchema(clientSchema, schemaVersion)){
			cout << "Schemas verified -- we gucci!" << endl;
			int confirm = 1;
			int netOrderConfirm = htonl(confirm);
			sock->send(&netOrderConfirm, sizeof(netOrderConfirm));		//Tell the client his schema is good
			beginTransfer = true;
		}
		else{
			cerr << "Uncompatibile schema versions..." << endl;
		}

		if(beginTransfer){
			/** NOTE: no_xxx means network order and ho_xxx means host order **/

			//Receive Session Overview parameters from HTLx and convert to host byte order
			uint32_t ho_bytesPerBlock = ntohl(message);
			uint32_t ho_blocksPerFrame = ntohl(message);
			uint32_t ho_totalBlocks = ntohl(message);
			uint32_t ho_firstBlockAddr = ntohl(message);

			//DEBUG
			cout << "Bytes Per Block: " << ho_bytesPerBlock;
			cout << "\nBlocks Per Frame: " << ho_blocksPerFrame << endl;

			//Now that we know the terms of the session, we can request a transfer
			//First we set the dummy values for the transfer request (normally this would be done by operator via BOOM Box UI
			//or controlled via some mechanism within the actual BOOM Box's code - but this is a test for messaging...
			HTL_Messaging_schema1::ReqTransfer transReq;
			cout << "\nRequesting Transfer..." << endl;
			transReq.set_blocksintrans(100);
			transReq.set_startingblockaddr(0);
			transReq.set_transferid(0);

			//Get the request parameters, and convert them to network byte order
			uint32_t no_blocksInTrans = htonl(transReq.blocksintrans());
			uint32_t no_startingBlock = htonl(transReq.startingblockaddr());
			uint32_t no_transferID = htonl(transReq.transferid());

			//Now send the parameters to HTLx as a request
			sock->send(&no_transferID,sizeof(no_transferID));
			sock->send(&no_startingBlock, sizeof(no_startingBlock));
			sock->send(&no_blocksInTrans, sizeof(no_blocksInTrans));


			/*
			 * At this point, we're receiving UDP data and doing stuff with it until the request is completed (the client will tell us)
			 */
			cout << "\n\nReceiving data..." << endl;
			cout << "Receiving data..." << endl;
			//Receive the RequestCompleted message from the HTLx
			uint32_t ho_completedId = ntohl(message);
			cout << "\nHTLx says Transfer Request " << ho_completedId << " completed" << endl;
			//He thinks its completed, we need to check that
			/*
			 * if(numFramesRecv == transReq.blocksintrans() * ho_blocksPerFrame){
			 * 		We gucci
			 * }
			 * else{
			 * 		No bueno - rerequest
			 * }
			 */

			//We're done for this transfer, move on to the next one
			//For the purposes of this test, I'm just testing a single transfer, so we're done here.

			break;

		}
	}
	delete sock;
}

/*
 * Verify client and server schema versions
 * Returns 1 if schema versions are the same
 */
int verifySchema(uint32_t clientSV, uint32_t localSV){
	if(clientSV == localSV){
		return 1;
	}
	else{
		return 0;
	}
}
