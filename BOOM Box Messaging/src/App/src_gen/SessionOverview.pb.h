// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionOverview.proto

#ifndef PROTOBUF_SessionOverview_2eproto__INCLUDED
#define PROTOBUF_SessionOverview_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_SessionOverview_2eproto();
void protobuf_AssignDesc_SessionOverview_2eproto();
void protobuf_ShutdownFile_SessionOverview_2eproto();

class SessionData;

enum SessionData_MessageID {
  SessionData_MessageID_ID = 2
};
bool SessionData_MessageID_IsValid(int value);
const SessionData_MessageID SessionData_MessageID_MessageID_MIN = SessionData_MessageID_ID;
const SessionData_MessageID SessionData_MessageID_MessageID_MAX = SessionData_MessageID_ID;
const int SessionData_MessageID_MessageID_ARRAYSIZE = SessionData_MessageID_MessageID_MAX + 1;

const ::google::protobuf::EnumDescriptor* SessionData_MessageID_descriptor();
inline const ::std::string& SessionData_MessageID_Name(SessionData_MessageID value) {
  return ::google::protobuf::internal::NameOfEnum(
    SessionData_MessageID_descriptor(), value);
}
inline bool SessionData_MessageID_Parse(
    const ::std::string& name, SessionData_MessageID* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SessionData_MessageID>(
    SessionData_MessageID_descriptor(), name, value);
}
// ===================================================================

class SessionData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SessionData) */ {
 public:
  SessionData();
  virtual ~SessionData();

  SessionData(const SessionData& from);

  inline SessionData& operator=(const SessionData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SessionData& default_instance();

  void Swap(SessionData* other);

  // implements Message ----------------------------------------------

  inline SessionData* New() const { return New(NULL); }

  SessionData* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SessionData& from);
  void MergeFrom(const SessionData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SessionData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef SessionData_MessageID MessageID;
  static const MessageID ID =
    SessionData_MessageID_ID;
  static inline bool MessageID_IsValid(int value) {
    return SessionData_MessageID_IsValid(value);
  }
  static const MessageID MessageID_MIN =
    SessionData_MessageID_MessageID_MIN;
  static const MessageID MessageID_MAX =
    SessionData_MessageID_MessageID_MAX;
  static const int MessageID_ARRAYSIZE =
    SessionData_MessageID_MessageID_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  MessageID_descriptor() {
    return SessionData_MessageID_descriptor();
  }
  static inline const ::std::string& MessageID_Name(MessageID value) {
    return SessionData_MessageID_Name(value);
  }
  static inline bool MessageID_Parse(const ::std::string& name,
      MessageID* value) {
    return SessionData_MessageID_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required uint32 bytesPerLBA = 1;
  bool has_bytesperlba() const;
  void clear_bytesperlba();
  static const int kBytesPerLBAFieldNumber = 1;
  ::google::protobuf::uint32 bytesperlba() const;
  void set_bytesperlba(::google::protobuf::uint32 value);

  // required uint32 maxBlocksPerPacket = 2;
  bool has_maxblocksperpacket() const;
  void clear_maxblocksperpacket();
  static const int kMaxBlocksPerPacketFieldNumber = 2;
  ::google::protobuf::uint32 maxblocksperpacket() const;
  void set_maxblocksperpacket(::google::protobuf::uint32 value);

  // required uint32 totalBlocks = 3;
  bool has_totalblocks() const;
  void clear_totalblocks();
  static const int kTotalBlocksFieldNumber = 3;
  ::google::protobuf::uint32 totalblocks() const;
  void set_totalblocks(::google::protobuf::uint32 value);

  // required uint32 firstBlock = 4;
  bool has_firstblock() const;
  void clear_firstblock();
  static const int kFirstBlockFieldNumber = 4;
  ::google::protobuf::uint32 firstblock() const;
  void set_firstblock(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:SessionData)
 private:
  inline void set_has_bytesperlba();
  inline void clear_has_bytesperlba();
  inline void set_has_maxblocksperpacket();
  inline void clear_has_maxblocksperpacket();
  inline void set_has_totalblocks();
  inline void clear_has_totalblocks();
  inline void set_has_firstblock();
  inline void clear_has_firstblock();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 bytesperlba_;
  ::google::protobuf::uint32 maxblocksperpacket_;
  ::google::protobuf::uint32 totalblocks_;
  ::google::protobuf::uint32 firstblock_;
  friend void  protobuf_AddDesc_SessionOverview_2eproto();
  friend void protobuf_AssignDesc_SessionOverview_2eproto();
  friend void protobuf_ShutdownFile_SessionOverview_2eproto();

  void InitAsDefaultInstance();
  static SessionData* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SessionData

// required uint32 bytesPerLBA = 1;
inline bool SessionData::has_bytesperlba() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SessionData::set_has_bytesperlba() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SessionData::clear_has_bytesperlba() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SessionData::clear_bytesperlba() {
  bytesperlba_ = 0u;
  clear_has_bytesperlba();
}
inline ::google::protobuf::uint32 SessionData::bytesperlba() const {
  // @@protoc_insertion_point(field_get:SessionData.bytesPerLBA)
  return bytesperlba_;
}
inline void SessionData::set_bytesperlba(::google::protobuf::uint32 value) {
  set_has_bytesperlba();
  bytesperlba_ = value;
  // @@protoc_insertion_point(field_set:SessionData.bytesPerLBA)
}

// required uint32 maxBlocksPerPacket = 2;
inline bool SessionData::has_maxblocksperpacket() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SessionData::set_has_maxblocksperpacket() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SessionData::clear_has_maxblocksperpacket() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SessionData::clear_maxblocksperpacket() {
  maxblocksperpacket_ = 0u;
  clear_has_maxblocksperpacket();
}
inline ::google::protobuf::uint32 SessionData::maxblocksperpacket() const {
  // @@protoc_insertion_point(field_get:SessionData.maxBlocksPerPacket)
  return maxblocksperpacket_;
}
inline void SessionData::set_maxblocksperpacket(::google::protobuf::uint32 value) {
  set_has_maxblocksperpacket();
  maxblocksperpacket_ = value;
  // @@protoc_insertion_point(field_set:SessionData.maxBlocksPerPacket)
}

// required uint32 totalBlocks = 3;
inline bool SessionData::has_totalblocks() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SessionData::set_has_totalblocks() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SessionData::clear_has_totalblocks() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SessionData::clear_totalblocks() {
  totalblocks_ = 0u;
  clear_has_totalblocks();
}
inline ::google::protobuf::uint32 SessionData::totalblocks() const {
  // @@protoc_insertion_point(field_get:SessionData.totalBlocks)
  return totalblocks_;
}
inline void SessionData::set_totalblocks(::google::protobuf::uint32 value) {
  set_has_totalblocks();
  totalblocks_ = value;
  // @@protoc_insertion_point(field_set:SessionData.totalBlocks)
}

// required uint32 firstBlock = 4;
inline bool SessionData::has_firstblock() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SessionData::set_has_firstblock() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SessionData::clear_has_firstblock() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SessionData::clear_firstblock() {
  firstblock_ = 0u;
  clear_has_firstblock();
}
inline ::google::protobuf::uint32 SessionData::firstblock() const {
  // @@protoc_insertion_point(field_get:SessionData.firstBlock)
  return firstblock_;
}
inline void SessionData::set_firstblock(::google::protobuf::uint32 value) {
  set_has_firstblock();
  firstblock_ = value;
  // @@protoc_insertion_point(field_set:SessionData.firstBlock)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::SessionData_MessageID> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SessionData_MessageID>() {
  return ::SessionData_MessageID_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SessionOverview_2eproto__INCLUDED
