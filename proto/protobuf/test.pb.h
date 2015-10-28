// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef PROTOBUF_test_2eproto__INCLUDED
#define PROTOBUF_test_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace MyProtoBuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_test_2eproto();
void protobuf_AssignDesc_test_2eproto();
void protobuf_ShutdownFile_test_2eproto();

class CMsgLoginReq;
class CMsgLoginRtn;

// ===================================================================

class CMsgLoginReq : public ::google::protobuf::Message {
 public:
  CMsgLoginReq();
  virtual ~CMsgLoginReq();

  CMsgLoginReq(const CMsgLoginReq& from);

  inline CMsgLoginReq& operator=(const CMsgLoginReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CMsgLoginReq& default_instance();

  void Swap(CMsgLoginReq* other);

  // implements Message ----------------------------------------------

  CMsgLoginReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CMsgLoginReq& from);
  void MergeFrom(const CMsgLoginReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string account = 1;
  inline bool has_account() const;
  inline void clear_account();
  static const int kAccountFieldNumber = 1;
  inline const ::std::string& account() const;
  inline void set_account(const ::std::string& value);
  inline void set_account(const char* value);
  inline void set_account(const char* value, size_t size);
  inline ::std::string* mutable_account();
  inline ::std::string* release_account();
  inline void set_allocated_account(::std::string* account);

  // @@protoc_insertion_point(class_scope:MyProtoBuf.CMsgLoginReq)
 private:
  inline void set_has_account();
  inline void clear_has_account();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* account_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static CMsgLoginReq* default_instance_;
};
// -------------------------------------------------------------------

class CMsgLoginRtn : public ::google::protobuf::Message {
 public:
  CMsgLoginRtn();
  virtual ~CMsgLoginRtn();

  CMsgLoginRtn(const CMsgLoginRtn& from);

  inline CMsgLoginRtn& operator=(const CMsgLoginRtn& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CMsgLoginRtn& default_instance();

  void Swap(CMsgLoginRtn* other);

  // implements Message ----------------------------------------------

  CMsgLoginRtn* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CMsgLoginRtn& from);
  void MergeFrom(const CMsgLoginRtn& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 ret = 1;
  inline bool has_ret() const;
  inline void clear_ret();
  static const int kRetFieldNumber = 1;
  inline ::google::protobuf::int32 ret() const;
  inline void set_ret(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:MyProtoBuf.CMsgLoginRtn)
 private:
  inline void set_has_ret();
  inline void clear_has_ret();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 ret_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static CMsgLoginRtn* default_instance_;
};
// ===================================================================


// ===================================================================

// CMsgLoginReq

// required string account = 1;
inline bool CMsgLoginReq::has_account() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CMsgLoginReq::set_has_account() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CMsgLoginReq::clear_has_account() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CMsgLoginReq::clear_account() {
  if (account_ != &::google::protobuf::internal::kEmptyString) {
    account_->clear();
  }
  clear_has_account();
}
inline const ::std::string& CMsgLoginReq::account() const {
  return *account_;
}
inline void CMsgLoginReq::set_account(const ::std::string& value) {
  set_has_account();
  if (account_ == &::google::protobuf::internal::kEmptyString) {
    account_ = new ::std::string;
  }
  account_->assign(value);
}
inline void CMsgLoginReq::set_account(const char* value) {
  set_has_account();
  if (account_ == &::google::protobuf::internal::kEmptyString) {
    account_ = new ::std::string;
  }
  account_->assign(value);
}
inline void CMsgLoginReq::set_account(const char* value, size_t size) {
  set_has_account();
  if (account_ == &::google::protobuf::internal::kEmptyString) {
    account_ = new ::std::string;
  }
  account_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CMsgLoginReq::mutable_account() {
  set_has_account();
  if (account_ == &::google::protobuf::internal::kEmptyString) {
    account_ = new ::std::string;
  }
  return account_;
}
inline ::std::string* CMsgLoginReq::release_account() {
  clear_has_account();
  if (account_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = account_;
    account_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CMsgLoginReq::set_allocated_account(::std::string* account) {
  if (account_ != &::google::protobuf::internal::kEmptyString) {
    delete account_;
  }
  if (account) {
    set_has_account();
    account_ = account;
  } else {
    clear_has_account();
    account_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// CMsgLoginRtn

// required int32 ret = 1;
inline bool CMsgLoginRtn::has_ret() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CMsgLoginRtn::set_has_ret() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CMsgLoginRtn::clear_has_ret() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CMsgLoginRtn::clear_ret() {
  ret_ = 0;
  clear_has_ret();
}
inline ::google::protobuf::int32 CMsgLoginRtn::ret() const {
  return ret_;
}
inline void CMsgLoginRtn::set_ret(::google::protobuf::int32 value) {
  set_has_ret();
  ret_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace MyProtoBuf

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_test_2eproto__INCLUDED
