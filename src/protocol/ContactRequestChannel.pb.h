// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ContactRequestChannel.proto

#ifndef PROTOBUF_ContactRequestChannel_2eproto__INCLUDED
#define PROTOBUF_ContactRequestChannel_2eproto__INCLUDED

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
#include "ControlChannel.pb.h"
// @@protoc_insertion_point(includes)

namespace Protocol {
namespace Data {
namespace ContactRequest {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_ContactRequestChannel_2eproto();
void protobuf_AssignDesc_ContactRequestChannel_2eproto();
void protobuf_ShutdownFile_ContactRequestChannel_2eproto();

class ContactRequest;
class Response;

enum Response_Status {
  Response_Status_Undefined = 0,
  Response_Status_Pending = 1,
  Response_Status_Accepted = 2,
  Response_Status_Rejected = 3,
  Response_Status_Error = 4
};
bool Response_Status_IsValid(int value);
const Response_Status Response_Status_Status_MIN = Response_Status_Undefined;
const Response_Status Response_Status_Status_MAX = Response_Status_Error;
const int Response_Status_Status_ARRAYSIZE = Response_Status_Status_MAX + 1;

const ::google::protobuf::EnumDescriptor* Response_Status_descriptor();
inline const ::std::string& Response_Status_Name(Response_Status value) {
  return ::google::protobuf::internal::NameOfEnum(
    Response_Status_descriptor(), value);
}
inline bool Response_Status_Parse(
    const ::std::string& name, Response_Status* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Response_Status>(
    Response_Status_descriptor(), name, value);
}
enum Limits {
  MessageMaxCharacters = 2000,
  NicknameMaxCharacters = 30
};
bool Limits_IsValid(int value);
const Limits Limits_MIN = NicknameMaxCharacters;
const Limits Limits_MAX = MessageMaxCharacters;
const int Limits_ARRAYSIZE = Limits_MAX + 1;

const ::google::protobuf::EnumDescriptor* Limits_descriptor();
inline const ::std::string& Limits_Name(Limits value) {
  return ::google::protobuf::internal::NameOfEnum(
    Limits_descriptor(), value);
}
inline bool Limits_Parse(
    const ::std::string& name, Limits* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Limits>(
    Limits_descriptor(), name, value);
}
// ===================================================================

class ContactRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Protocol.Data.ContactRequest.ContactRequest) */ {
 public:
  ContactRequest();
  virtual ~ContactRequest();

  ContactRequest(const ContactRequest& from);

  inline ContactRequest& operator=(const ContactRequest& from) {
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
  static const ContactRequest& default_instance();

  void Swap(ContactRequest* other);

  // implements Message ----------------------------------------------

  inline ContactRequest* New() const { return New(NULL); }

  ContactRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ContactRequest& from);
  void MergeFrom(const ContactRequest& from);
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
  void InternalSwap(ContactRequest* other);
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

  // accessors -------------------------------------------------------

  // optional string nickname = 1;
  bool has_nickname() const;
  void clear_nickname();
  static const int kNicknameFieldNumber = 1;
  const ::std::string& nickname() const;
  void set_nickname(const ::std::string& value);
  void set_nickname(const char* value);
  void set_nickname(const char* value, size_t size);
  ::std::string* mutable_nickname();
  ::std::string* release_nickname();
  void set_allocated_nickname(::std::string* nickname);

  // optional string message_text = 2;
  bool has_message_text() const;
  void clear_message_text();
  static const int kMessageTextFieldNumber = 2;
  const ::std::string& message_text() const;
  void set_message_text(const ::std::string& value);
  void set_message_text(const char* value);
  void set_message_text(const char* value, size_t size);
  ::std::string* mutable_message_text();
  ::std::string* release_message_text();
  void set_allocated_message_text(::std::string* message_text);

  // @@protoc_insertion_point(class_scope:Protocol.Data.ContactRequest.ContactRequest)
 private:
  inline void set_has_nickname();
  inline void clear_has_nickname();
  inline void set_has_message_text();
  inline void clear_has_message_text();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr nickname_;
  ::google::protobuf::internal::ArenaStringPtr message_text_;
  friend void  protobuf_AddDesc_ContactRequestChannel_2eproto();
  friend void protobuf_AssignDesc_ContactRequestChannel_2eproto();
  friend void protobuf_ShutdownFile_ContactRequestChannel_2eproto();

  void InitAsDefaultInstance();
  static ContactRequest* default_instance_;
};
// -------------------------------------------------------------------

class Response : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Protocol.Data.ContactRequest.Response) */ {
 public:
  Response();
  virtual ~Response();

  Response(const Response& from);

  inline Response& operator=(const Response& from) {
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
  static const Response& default_instance();

  void Swap(Response* other);

  // implements Message ----------------------------------------------

  inline Response* New() const { return New(NULL); }

  Response* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Response& from);
  void MergeFrom(const Response& from);
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
  void InternalSwap(Response* other);
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

  typedef Response_Status Status;
  static const Status Undefined =
    Response_Status_Undefined;
  static const Status Pending =
    Response_Status_Pending;
  static const Status Accepted =
    Response_Status_Accepted;
  static const Status Rejected =
    Response_Status_Rejected;
  static const Status Error =
    Response_Status_Error;
  static inline bool Status_IsValid(int value) {
    return Response_Status_IsValid(value);
  }
  static const Status Status_MIN =
    Response_Status_Status_MIN;
  static const Status Status_MAX =
    Response_Status_Status_MAX;
  static const int Status_ARRAYSIZE =
    Response_Status_Status_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Status_descriptor() {
    return Response_Status_descriptor();
  }
  static inline const ::std::string& Status_Name(Status value) {
    return Response_Status_Name(value);
  }
  static inline bool Status_Parse(const ::std::string& name,
      Status* value) {
    return Response_Status_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .Protocol.Data.ContactRequest.Response.Status status = 1;
  bool has_status() const;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  ::Protocol::Data::ContactRequest::Response_Status status() const;
  void set_status(::Protocol::Data::ContactRequest::Response_Status value);

  // @@protoc_insertion_point(class_scope:Protocol.Data.ContactRequest.Response)
 private:
  inline void set_has_status();
  inline void clear_has_status();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int status_;
  friend void  protobuf_AddDesc_ContactRequestChannel_2eproto();
  friend void protobuf_AssignDesc_ContactRequestChannel_2eproto();
  friend void protobuf_ShutdownFile_ContactRequestChannel_2eproto();

  void InitAsDefaultInstance();
  static Response* default_instance_;
};
// ===================================================================

static const int kContactRequestFieldNumber = 200;
extern ::google::protobuf::internal::ExtensionIdentifier< ::Protocol::Data::Control::OpenChannel,
    ::google::protobuf::internal::MessageTypeTraits< ::Protocol::Data::ContactRequest::ContactRequest >, 11, false >
  contact_request;
static const int kResponseFieldNumber = 201;
extern ::google::protobuf::internal::ExtensionIdentifier< ::Protocol::Data::Control::ChannelResult,
    ::google::protobuf::internal::MessageTypeTraits< ::Protocol::Data::ContactRequest::Response >, 11, false >
  response;

// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ContactRequest

// optional string nickname = 1;
inline bool ContactRequest::has_nickname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ContactRequest::set_has_nickname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ContactRequest::clear_has_nickname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ContactRequest::clear_nickname() {
  nickname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_nickname();
}
inline const ::std::string& ContactRequest::nickname() const {
  // @@protoc_insertion_point(field_get:Protocol.Data.ContactRequest.ContactRequest.nickname)
  return nickname_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ContactRequest::set_nickname(const ::std::string& value) {
  set_has_nickname();
  nickname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Protocol.Data.ContactRequest.ContactRequest.nickname)
}
inline void ContactRequest::set_nickname(const char* value) {
  set_has_nickname();
  nickname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Protocol.Data.ContactRequest.ContactRequest.nickname)
}
inline void ContactRequest::set_nickname(const char* value, size_t size) {
  set_has_nickname();
  nickname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Protocol.Data.ContactRequest.ContactRequest.nickname)
}
inline ::std::string* ContactRequest::mutable_nickname() {
  set_has_nickname();
  // @@protoc_insertion_point(field_mutable:Protocol.Data.ContactRequest.ContactRequest.nickname)
  return nickname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ContactRequest::release_nickname() {
  // @@protoc_insertion_point(field_release:Protocol.Data.ContactRequest.ContactRequest.nickname)
  clear_has_nickname();
  return nickname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ContactRequest::set_allocated_nickname(::std::string* nickname) {
  if (nickname != NULL) {
    set_has_nickname();
  } else {
    clear_has_nickname();
  }
  nickname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), nickname);
  // @@protoc_insertion_point(field_set_allocated:Protocol.Data.ContactRequest.ContactRequest.nickname)
}

// optional string message_text = 2;
inline bool ContactRequest::has_message_text() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ContactRequest::set_has_message_text() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ContactRequest::clear_has_message_text() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ContactRequest::clear_message_text() {
  message_text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_message_text();
}
inline const ::std::string& ContactRequest::message_text() const {
  // @@protoc_insertion_point(field_get:Protocol.Data.ContactRequest.ContactRequest.message_text)
  return message_text_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ContactRequest::set_message_text(const ::std::string& value) {
  set_has_message_text();
  message_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Protocol.Data.ContactRequest.ContactRequest.message_text)
}
inline void ContactRequest::set_message_text(const char* value) {
  set_has_message_text();
  message_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Protocol.Data.ContactRequest.ContactRequest.message_text)
}
inline void ContactRequest::set_message_text(const char* value, size_t size) {
  set_has_message_text();
  message_text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Protocol.Data.ContactRequest.ContactRequest.message_text)
}
inline ::std::string* ContactRequest::mutable_message_text() {
  set_has_message_text();
  // @@protoc_insertion_point(field_mutable:Protocol.Data.ContactRequest.ContactRequest.message_text)
  return message_text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ContactRequest::release_message_text() {
  // @@protoc_insertion_point(field_release:Protocol.Data.ContactRequest.ContactRequest.message_text)
  clear_has_message_text();
  return message_text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ContactRequest::set_allocated_message_text(::std::string* message_text) {
  if (message_text != NULL) {
    set_has_message_text();
  } else {
    clear_has_message_text();
  }
  message_text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message_text);
  // @@protoc_insertion_point(field_set_allocated:Protocol.Data.ContactRequest.ContactRequest.message_text)
}

// -------------------------------------------------------------------

// Response

// required .Protocol.Data.ContactRequest.Response.Status status = 1;
inline bool Response::has_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Response::set_has_status() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Response::clear_has_status() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Response::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::Protocol::Data::ContactRequest::Response_Status Response::status() const {
  // @@protoc_insertion_point(field_get:Protocol.Data.ContactRequest.Response.status)
  return static_cast< ::Protocol::Data::ContactRequest::Response_Status >(status_);
}
inline void Response::set_status(::Protocol::Data::ContactRequest::Response_Status value) {
  assert(::Protocol::Data::ContactRequest::Response_Status_IsValid(value));
  set_has_status();
  status_ = value;
  // @@protoc_insertion_point(field_set:Protocol.Data.ContactRequest.Response.status)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ContactRequest
}  // namespace Data
}  // namespace Protocol

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Protocol::Data::ContactRequest::Response_Status> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Protocol::Data::ContactRequest::Response_Status>() {
  return ::Protocol::Data::ContactRequest::Response_Status_descriptor();
}
template <> struct is_proto_enum< ::Protocol::Data::ContactRequest::Limits> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Protocol::Data::ContactRequest::Limits>() {
  return ::Protocol::Data::ContactRequest::Limits_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ContactRequestChannel_2eproto__INCLUDED