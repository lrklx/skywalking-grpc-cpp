// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: language-agent/KeyWithStringValue.proto

#include "language-agent/KeyWithStringValue.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class KeyWithStringValueDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<KeyWithStringValue> _instance;
} _KeyWithStringValue_default_instance_;
static void InitDefaultsscc_info_KeyWithStringValue_language_2dagent_2fKeyWithStringValue_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_KeyWithStringValue_default_instance_;
    new (ptr) ::KeyWithStringValue();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::KeyWithStringValue::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_KeyWithStringValue_language_2dagent_2fKeyWithStringValue_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_KeyWithStringValue_language_2dagent_2fKeyWithStringValue_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_language_2dagent_2fKeyWithStringValue_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_language_2dagent_2fKeyWithStringValue_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_language_2dagent_2fKeyWithStringValue_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_language_2dagent_2fKeyWithStringValue_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::KeyWithStringValue, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::KeyWithStringValue, key_),
  PROTOBUF_FIELD_OFFSET(::KeyWithStringValue, value_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::KeyWithStringValue)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_KeyWithStringValue_default_instance_),
};

const char descriptor_table_protodef_language_2dagent_2fKeyWithStringValue_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\'language-agent/KeyWithStringValue.prot"
  "o\"0\n\022KeyWithStringValue\022\013\n\003key\030\001 \001(\t\022\r\n\005"
  "value\030\002 \001(\tBQ\n0org.apache.skywalking.apm"
  ".network.language.agentP\001\252\002\032SkyWalking.N"
  "etworkProtocolb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_language_2dagent_2fKeyWithStringValue_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_language_2dagent_2fKeyWithStringValue_2eproto_sccs[1] = {
  &scc_info_KeyWithStringValue_language_2dagent_2fKeyWithStringValue_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_language_2dagent_2fKeyWithStringValue_2eproto_once;
static bool descriptor_table_language_2dagent_2fKeyWithStringValue_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_language_2dagent_2fKeyWithStringValue_2eproto = {
  &descriptor_table_language_2dagent_2fKeyWithStringValue_2eproto_initialized, descriptor_table_protodef_language_2dagent_2fKeyWithStringValue_2eproto, "language-agent/KeyWithStringValue.proto", 182,
  &descriptor_table_language_2dagent_2fKeyWithStringValue_2eproto_once, descriptor_table_language_2dagent_2fKeyWithStringValue_2eproto_sccs, descriptor_table_language_2dagent_2fKeyWithStringValue_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_language_2dagent_2fKeyWithStringValue_2eproto::offsets,
  file_level_metadata_language_2dagent_2fKeyWithStringValue_2eproto, 1, file_level_enum_descriptors_language_2dagent_2fKeyWithStringValue_2eproto, file_level_service_descriptors_language_2dagent_2fKeyWithStringValue_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_language_2dagent_2fKeyWithStringValue_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_language_2dagent_2fKeyWithStringValue_2eproto), true);

// ===================================================================

void KeyWithStringValue::InitAsDefaultInstance() {
}
class KeyWithStringValue::_Internal {
 public:
};

KeyWithStringValue::KeyWithStringValue()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:KeyWithStringValue)
}
KeyWithStringValue::KeyWithStringValue(const KeyWithStringValue& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_key().empty()) {
    key_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_value().empty()) {
    value_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  // @@protoc_insertion_point(copy_constructor:KeyWithStringValue)
}

void KeyWithStringValue::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_KeyWithStringValue_language_2dagent_2fKeyWithStringValue_2eproto.base);
  key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

KeyWithStringValue::~KeyWithStringValue() {
  // @@protoc_insertion_point(destructor:KeyWithStringValue)
  SharedDtor();
}

void KeyWithStringValue::SharedDtor() {
  key_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void KeyWithStringValue::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const KeyWithStringValue& KeyWithStringValue::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_KeyWithStringValue_language_2dagent_2fKeyWithStringValue_2eproto.base);
  return *internal_default_instance();
}


void KeyWithStringValue::Clear() {
// @@protoc_insertion_point(message_clear_start:KeyWithStringValue)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  key_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  value_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* KeyWithStringValue::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string key = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_key(), ptr, ctx, "KeyWithStringValue.key");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_value(), ptr, ctx, "KeyWithStringValue.value");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* KeyWithStringValue::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:KeyWithStringValue)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string key = 1;
  if (this->key().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_key().data(), static_cast<int>(this->_internal_key().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "KeyWithStringValue.key");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_key(), target);
  }

  // string value = 2;
  if (this->value().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_value().data(), static_cast<int>(this->_internal_value().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "KeyWithStringValue.value");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:KeyWithStringValue)
  return target;
}

size_t KeyWithStringValue::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:KeyWithStringValue)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string key = 1;
  if (this->key().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_key());
  }

  // string value = 2;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_value());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void KeyWithStringValue::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:KeyWithStringValue)
  GOOGLE_DCHECK_NE(&from, this);
  const KeyWithStringValue* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<KeyWithStringValue>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:KeyWithStringValue)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:KeyWithStringValue)
    MergeFrom(*source);
  }
}

void KeyWithStringValue::MergeFrom(const KeyWithStringValue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:KeyWithStringValue)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.key().size() > 0) {

    key_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  if (from.value().size() > 0) {

    value_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
}

void KeyWithStringValue::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:KeyWithStringValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KeyWithStringValue::CopyFrom(const KeyWithStringValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:KeyWithStringValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KeyWithStringValue::IsInitialized() const {
  return true;
}

void KeyWithStringValue::InternalSwap(KeyWithStringValue* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  key_.Swap(&other->key_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  value_.Swap(&other->value_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata KeyWithStringValue::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::KeyWithStringValue* Arena::CreateMaybeMessage< ::KeyWithStringValue >(Arena* arena) {
  return Arena::CreateInternal< ::KeyWithStringValue >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
