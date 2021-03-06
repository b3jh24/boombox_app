// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionOverview.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SessionOverview.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* SessionData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SessionData_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* SessionData_MessageID_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_SessionOverview_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_SessionOverview_2eproto() {
  protobuf_AddDesc_SessionOverview_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "SessionOverview.proto");
  GOOGLE_CHECK(file != NULL);
  SessionData_descriptor_ = file->message_type(0);
  static const int SessionData_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SessionData, bytesperlba_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SessionData, maxblocksperpacket_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SessionData, totalblocks_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SessionData, firstblock_),
  };
  SessionData_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SessionData_descriptor_,
      SessionData::default_instance_,
      SessionData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SessionData, _has_bits_[0]),
      -1,
      -1,
      sizeof(SessionData),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SessionData, _internal_metadata_),
      -1);
  SessionData_MessageID_descriptor_ = SessionData_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_SessionOverview_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SessionData_descriptor_, &SessionData::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_SessionOverview_2eproto() {
  delete SessionData::default_instance_;
  delete SessionData_reflection_;
}

void protobuf_AddDesc_SessionOverview_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_SessionOverview_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025SessionOverview.proto\"|\n\013SessionData\022\023"
    "\n\013bytesPerLBA\030\001 \002(\r\022\032\n\022maxBlocksPerPacke"
    "t\030\002 \002(\r\022\023\n\013totalBlocks\030\003 \002(\r\022\022\n\nfirstBlo"
    "ck\030\004 \002(\r\"\023\n\tMessageID\022\006\n\002ID\020\002", 149);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SessionOverview.proto", &protobuf_RegisterTypes);
  SessionData::default_instance_ = new SessionData();
  SessionData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SessionOverview_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SessionOverview_2eproto {
  StaticDescriptorInitializer_SessionOverview_2eproto() {
    protobuf_AddDesc_SessionOverview_2eproto();
  }
} static_descriptor_initializer_SessionOverview_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* SessionData_MessageID_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SessionData_MessageID_descriptor_;
}
bool SessionData_MessageID_IsValid(int value) {
  switch(value) {
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SessionData_MessageID SessionData::ID;
const SessionData_MessageID SessionData::MessageID_MIN;
const SessionData_MessageID SessionData::MessageID_MAX;
const int SessionData::MessageID_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SessionData::kBytesPerLBAFieldNumber;
const int SessionData::kMaxBlocksPerPacketFieldNumber;
const int SessionData::kTotalBlocksFieldNumber;
const int SessionData::kFirstBlockFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SessionData::SessionData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:SessionData)
}

void SessionData::InitAsDefaultInstance() {
}

SessionData::SessionData(const SessionData& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:SessionData)
}

void SessionData::SharedCtor() {
  _cached_size_ = 0;
  bytesperlba_ = 0u;
  maxblocksperpacket_ = 0u;
  totalblocks_ = 0u;
  firstblock_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SessionData::~SessionData() {
  // @@protoc_insertion_point(destructor:SessionData)
  SharedDtor();
}

void SessionData::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SessionData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SessionData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SessionData_descriptor_;
}

const SessionData& SessionData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_SessionOverview_2eproto();
  return *default_instance_;
}

SessionData* SessionData::default_instance_ = NULL;

SessionData* SessionData::New(::google::protobuf::Arena* arena) const {
  SessionData* n = new SessionData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SessionData::Clear() {
// @@protoc_insertion_point(message_clear_start:SessionData)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(SessionData, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<SessionData*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(bytesperlba_, firstblock_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool SessionData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SessionData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 bytesPerLBA = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &bytesperlba_)));
          set_has_bytesperlba();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_maxBlocksPerPacket;
        break;
      }

      // required uint32 maxBlocksPerPacket = 2;
      case 2: {
        if (tag == 16) {
         parse_maxBlocksPerPacket:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &maxblocksperpacket_)));
          set_has_maxblocksperpacket();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_totalBlocks;
        break;
      }

      // required uint32 totalBlocks = 3;
      case 3: {
        if (tag == 24) {
         parse_totalBlocks:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &totalblocks_)));
          set_has_totalblocks();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_firstBlock;
        break;
      }

      // required uint32 firstBlock = 4;
      case 4: {
        if (tag == 32) {
         parse_firstBlock:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &firstblock_)));
          set_has_firstblock();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:SessionData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SessionData)
  return false;
#undef DO_
}

void SessionData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SessionData)
  // required uint32 bytesPerLBA = 1;
  if (has_bytesperlba()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->bytesperlba(), output);
  }

  // required uint32 maxBlocksPerPacket = 2;
  if (has_maxblocksperpacket()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->maxblocksperpacket(), output);
  }

  // required uint32 totalBlocks = 3;
  if (has_totalblocks()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->totalblocks(), output);
  }

  // required uint32 firstBlock = 4;
  if (has_firstblock()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->firstblock(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:SessionData)
}

::google::protobuf::uint8* SessionData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:SessionData)
  // required uint32 bytesPerLBA = 1;
  if (has_bytesperlba()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->bytesperlba(), target);
  }

  // required uint32 maxBlocksPerPacket = 2;
  if (has_maxblocksperpacket()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->maxblocksperpacket(), target);
  }

  // required uint32 totalBlocks = 3;
  if (has_totalblocks()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->totalblocks(), target);
  }

  // required uint32 firstBlock = 4;
  if (has_firstblock()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->firstblock(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SessionData)
  return target;
}

int SessionData::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:SessionData)
  int total_size = 0;

  if (has_bytesperlba()) {
    // required uint32 bytesPerLBA = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->bytesperlba());
  }

  if (has_maxblocksperpacket()) {
    // required uint32 maxBlocksPerPacket = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->maxblocksperpacket());
  }

  if (has_totalblocks()) {
    // required uint32 totalBlocks = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->totalblocks());
  }

  if (has_firstblock()) {
    // required uint32 firstBlock = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->firstblock());
  }

  return total_size;
}
int SessionData::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:SessionData)
  int total_size = 0;

  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required uint32 bytesPerLBA = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->bytesperlba());

    // required uint32 maxBlocksPerPacket = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->maxblocksperpacket());

    // required uint32 totalBlocks = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->totalblocks());

    // required uint32 firstBlock = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->firstblock());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SessionData::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:SessionData)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const SessionData* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SessionData>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:SessionData)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:SessionData)
    MergeFrom(*source);
  }
}

void SessionData::MergeFrom(const SessionData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SessionData)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_bytesperlba()) {
      set_bytesperlba(from.bytesperlba());
    }
    if (from.has_maxblocksperpacket()) {
      set_maxblocksperpacket(from.maxblocksperpacket());
    }
    if (from.has_totalblocks()) {
      set_totalblocks(from.totalblocks());
    }
    if (from.has_firstblock()) {
      set_firstblock(from.firstblock());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void SessionData::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:SessionData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SessionData::CopyFrom(const SessionData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SessionData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SessionData::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void SessionData::Swap(SessionData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SessionData::InternalSwap(SessionData* other) {
  std::swap(bytesperlba_, other->bytesperlba_);
  std::swap(maxblocksperpacket_, other->maxblocksperpacket_);
  std::swap(totalblocks_, other->totalblocks_);
  std::swap(firstblock_, other->firstblock_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SessionData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SessionData_descriptor_;
  metadata.reflection = SessionData_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SessionData

// required uint32 bytesPerLBA = 1;
bool SessionData::has_bytesperlba() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void SessionData::set_has_bytesperlba() {
  _has_bits_[0] |= 0x00000001u;
}
void SessionData::clear_has_bytesperlba() {
  _has_bits_[0] &= ~0x00000001u;
}
void SessionData::clear_bytesperlba() {
  bytesperlba_ = 0u;
  clear_has_bytesperlba();
}
 ::google::protobuf::uint32 SessionData::bytesperlba() const {
  // @@protoc_insertion_point(field_get:SessionData.bytesPerLBA)
  return bytesperlba_;
}
 void SessionData::set_bytesperlba(::google::protobuf::uint32 value) {
  set_has_bytesperlba();
  bytesperlba_ = value;
  // @@protoc_insertion_point(field_set:SessionData.bytesPerLBA)
}

// required uint32 maxBlocksPerPacket = 2;
bool SessionData::has_maxblocksperpacket() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void SessionData::set_has_maxblocksperpacket() {
  _has_bits_[0] |= 0x00000002u;
}
void SessionData::clear_has_maxblocksperpacket() {
  _has_bits_[0] &= ~0x00000002u;
}
void SessionData::clear_maxblocksperpacket() {
  maxblocksperpacket_ = 0u;
  clear_has_maxblocksperpacket();
}
 ::google::protobuf::uint32 SessionData::maxblocksperpacket() const {
  // @@protoc_insertion_point(field_get:SessionData.maxBlocksPerPacket)
  return maxblocksperpacket_;
}
 void SessionData::set_maxblocksperpacket(::google::protobuf::uint32 value) {
  set_has_maxblocksperpacket();
  maxblocksperpacket_ = value;
  // @@protoc_insertion_point(field_set:SessionData.maxBlocksPerPacket)
}

// required uint32 totalBlocks = 3;
bool SessionData::has_totalblocks() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void SessionData::set_has_totalblocks() {
  _has_bits_[0] |= 0x00000004u;
}
void SessionData::clear_has_totalblocks() {
  _has_bits_[0] &= ~0x00000004u;
}
void SessionData::clear_totalblocks() {
  totalblocks_ = 0u;
  clear_has_totalblocks();
}
 ::google::protobuf::uint32 SessionData::totalblocks() const {
  // @@protoc_insertion_point(field_get:SessionData.totalBlocks)
  return totalblocks_;
}
 void SessionData::set_totalblocks(::google::protobuf::uint32 value) {
  set_has_totalblocks();
  totalblocks_ = value;
  // @@protoc_insertion_point(field_set:SessionData.totalBlocks)
}

// required uint32 firstBlock = 4;
bool SessionData::has_firstblock() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void SessionData::set_has_firstblock() {
  _has_bits_[0] |= 0x00000008u;
}
void SessionData::clear_has_firstblock() {
  _has_bits_[0] &= ~0x00000008u;
}
void SessionData::clear_firstblock() {
  firstblock_ = 0u;
  clear_has_firstblock();
}
 ::google::protobuf::uint32 SessionData::firstblock() const {
  // @@protoc_insertion_point(field_get:SessionData.firstBlock)
  return firstblock_;
}
 void SessionData::set_firstblock(::google::protobuf::uint32 value) {
  set_has_firstblock();
  firstblock_ = value;
  // @@protoc_insertion_point(field_set:SessionData.firstBlock)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
