// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: language-agent/KeyWithStringValue.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_language_2dagent_2fKeyWithStringValue_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_language_2dagent_2fKeyWithStringValue_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_language_2dagent_2fKeyWithStringValue_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_language_2dagent_2fKeyWithStringValue_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_language_2dagent_2fKeyWithStringValue_2eproto;
class KeyWithStringValue;
class KeyWithStringValueDefaultTypeInternal;
extern KeyWithStringValueDefaultTypeInternal _KeyWithStringValue_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::KeyWithStringValue* Arena::CreateMaybeMessage<::KeyWithStringValue>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class KeyWithStringValue :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:KeyWithStringValue) */ {
 public:
  KeyWithStringValue();
  virtual ~KeyWithStringValue();

  KeyWithStringValue(const KeyWithStringValue& from);
  KeyWithStringValue(KeyWithStringValue&& from) noexcept
    : KeyWithStringValue() {
    *this = ::std::move(from);
  }

  inline KeyWithStringValue& operator=(const KeyWithStringValue& from) {
    CopyFrom(from);
    return *this;
  }
  inline KeyWithStringValue& operator=(KeyWithStringValue&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const KeyWithStringValue& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const KeyWithStringValue* internal_default_instance() {
    return reinterpret_cast<const KeyWithStringValue*>(
               &_KeyWithStringValue_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(KeyWithStringValue& a, KeyWithStringValue& b) {
    a.Swap(&b);
  }
  inline void Swap(KeyWithStringValue* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline KeyWithStringValue* New() const final {
    return CreateMaybeMessage<KeyWithStringValue>(nullptr);
  }

  KeyWithStringValue* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<KeyWithStringValue>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const KeyWithStringValue& from);
  void MergeFrom(const KeyWithStringValue& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(KeyWithStringValue* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "KeyWithStringValue";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_language_2dagent_2fKeyWithStringValue_2eproto);
    return ::descriptor_table_language_2dagent_2fKeyWithStringValue_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeyFieldNumber = 1,
    kValueFieldNumber = 2,
  };
  // string key = 1;
  void clear_key();
  const std::string& key() const;
  void set_key(const std::string& value);
  void set_key(std::string&& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  std::string* mutable_key();
  std::string* release_key();
  void set_allocated_key(std::string* key);
  private:
  const std::string& _internal_key() const;
  void _internal_set_key(const std::string& value);
  std::string* _internal_mutable_key();
  public:

  // string value = 2;
  void clear_value();
  const std::string& value() const;
  void set_value(const std::string& value);
  void set_value(std::string&& value);
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  std::string* mutable_value();
  std::string* release_value();
  void set_allocated_value(std::string* value);
  private:
  const std::string& _internal_value() const;
  void _internal_set_value(const std::string& value);
  std::string* _internal_mutable_value();
  public:

  // @@protoc_insertion_point(class_scope:KeyWithStringValue)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr value_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_language_2dagent_2fKeyWithStringValue_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// KeyWithStringValue

// string key = 1;
inline void KeyWithStringValue::clear_key() {
  key_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& KeyWithStringValue::key() const {
  // @@protoc_insertion_point(field_get:KeyWithStringValue.key)
  return _internal_key();
}
inline void KeyWithStringValue::set_key(const std::string& value) {
  _internal_set_key(value);
  // @@protoc_insertion_point(field_set:KeyWithStringValue.key)
}
inline std::string* KeyWithStringValue::mutable_key() {
  // @@protoc_insertion_point(field_mutable:KeyWithStringValue.key)
  return _internal_mutable_key();
}
inline const std::string& KeyWithStringValue::_internal_key() const {
  return key_.GetNoArena();
}
inline void KeyWithStringValue::_internal_set_key(const std::string& value) {
  
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void KeyWithStringValue::set_key(std::string&& value) {
  
  key_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:KeyWithStringValue.key)
}
inline void KeyWithStringValue::set_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:KeyWithStringValue.key)
}
inline void KeyWithStringValue::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:KeyWithStringValue.key)
}
inline std::string* KeyWithStringValue::_internal_mutable_key() {
  
  return key_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* KeyWithStringValue::release_key() {
  // @@protoc_insertion_point(field_release:KeyWithStringValue.key)
  
  return key_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void KeyWithStringValue::set_allocated_key(std::string* key) {
  if (key != nullptr) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:KeyWithStringValue.key)
}

// string value = 2;
inline void KeyWithStringValue::clear_value() {
  value_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& KeyWithStringValue::value() const {
  // @@protoc_insertion_point(field_get:KeyWithStringValue.value)
  return _internal_value();
}
inline void KeyWithStringValue::set_value(const std::string& value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:KeyWithStringValue.value)
}
inline std::string* KeyWithStringValue::mutable_value() {
  // @@protoc_insertion_point(field_mutable:KeyWithStringValue.value)
  return _internal_mutable_value();
}
inline const std::string& KeyWithStringValue::_internal_value() const {
  return value_.GetNoArena();
}
inline void KeyWithStringValue::_internal_set_value(const std::string& value) {
  
  value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void KeyWithStringValue::set_value(std::string&& value) {
  
  value_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:KeyWithStringValue.value)
}
inline void KeyWithStringValue::set_value(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:KeyWithStringValue.value)
}
inline void KeyWithStringValue::set_value(const char* value, size_t size) {
  
  value_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:KeyWithStringValue.value)
}
inline std::string* KeyWithStringValue::_internal_mutable_value() {
  
  return value_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* KeyWithStringValue::release_value() {
  // @@protoc_insertion_point(field_release:KeyWithStringValue.value)
  
  return value_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void KeyWithStringValue::set_allocated_value(std::string* value) {
  if (value != nullptr) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:KeyWithStringValue.value)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_language_2dagent_2fKeyWithStringValue_2eproto