// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: language-agent/KeyWithIntegerValue.proto

#include "language-agent/KeyWithIntegerValue.pb.h"

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
class KeyWithIntegerValueDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<KeyWithIntegerValue> _instance;
} _KeyWithIntegerValue_default_instance_;
static void InitDefaultsscc_info_KeyWithIntegerValue_language_2dagent_2fKeyWithIntegerValue_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_KeyWithIntegerValue_default_instance_;
    new (ptr) ::KeyWithIntegerValue();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::KeyWithIntegerValue::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_KeyWithIntegerValue_language_2dagent_2fKeyWithIntegerValue_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_KeyWithIntegerValue_language_2dagent_2fKeyWithIntegerValue_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_language_2dagent_2fKeyWithIntegerValue_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_language_2dagent_2fKeyWithIntegerValue_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_language_2dagent_2fKeyWithIntegerValue_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_language_2dagent_2fKeyWithIntegerValue_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::KeyWithIntegerValue, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::KeyWithIntegerValue, key_),
  PROTOBUF_FIELD_OFFSET(::KeyWithIntegerValue, value_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::KeyWithIntegerValue)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_KeyWithIntegerValue_default_instance_),
};

const char descriptor_table_protodef_language_2dagent_2fKeyWithIntegerValue_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n(language-agent/KeyWithIntegerValue.pro"
  "to\"1\n\023KeyWithIntegerValue\022\013\n\003key\030\001 \001(\t\022\r"
  "\n\005value\030\002 \001(\005BQ\n0org.apache.skywalking.a"
  "pm.network.language.agentP\001\252\002\032SkyWalking"
  ".NetworkProtocolb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_language_2dagent_2fKeyWithIntegerValue_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_language_2dagent_2fKeyWithIntegerValue_2eproto_sccs[1] = {
  &scc_info_KeyWithIntegerValue_language_2dagent_2fKeyWithIntegerValue_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_language_2dagent_2fKeyWithIntegerValue_2eproto_once;
static bool descriptor_table_language_2dagent_2fKeyWithIntegerValue_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_language_2dagent_2fKeyWithIntegerValue_2eproto = {
  &descriptor_table_language_2dagent_2fKeyWithIntegerValue_2eproto_initialized, descriptor_table_protodef_language_2dagent_2fKeyWithIntegerValue_2eproto, "language-agent/KeyWithIntegerValue.proto", 184,
  &descriptor_table_language_2dagent_2fKeyWithIntegerValue_2eproto_once, descriptor_table_language_2dagent_2fKeyWithIntegerValue_2eproto_sccs, descriptor_table_language_2dagent_2fKeyWithIntegerValue_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_language_2dagent_2fKeyWithIntegerValue_2eproto::offsets,
  file_level_metadata_language_2dagent_2fKeyWithIntegerValue_2eproto, 1, file_level_enum_descriptors_language_2dagent_2fKeyWithIntegerValue_2eproto, file_level_service_descriptors_language_2dagent_2fKeyWithIntegerValue_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_language_2dagent_2fKeyWithIntegerValue_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_language_2dagent_2fKeyWithIntegerValue_2eproto), true);

// ===================================================================

void KeyWithIntegerValue::InitAsDefaultInstance() {
}
class KeyWithIntegerValue::_Internal {
 public:
};

KeyWithIntegerValue::KeyWithIntegerValue()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:KeyWithIntegerValue)
}
KeyWithIntegerValue::KeyWithIntegerValue(const KeyWithIntegerValue& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_key().empty()) {
    key_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  value_ = from.value_;
  // @@protoc_insertion_point(copy_constructor:KeyWithIntegerValue)
}

void KeyWithIntegerValue::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_KeyWithIntegerValue_language_2dagent_2fKeyWithIntegerValue_2eproto.base);
  key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  value_ = 0;
}

KeyWithIntegerValue::~KeyWithIntegerValue() {
  // @@protoc_insertion_point(destructor:KeyWithIntegerValue)
  SharedDtor();
}

void KeyWithIntegerValue::SharedDtor() {
  key_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void KeyWithIntegerValue::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const KeyWithIntegerValue& KeyWithIntegerValue::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_KeyWithIntegerValue_language_2dagent_2fKeyWithIntegerValue_2eproto.base);
  return *internal_default_instance();
}


void KeyWithIntegerValue::Clear() {
// @@protoc_insertion_point(message_clear_start:KeyWithIntegerValue)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  key_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  value_ = 0;
  _internal_metadata_.Clear();
}

const char* KeyWithIntegerValue::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string key = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_key(), ptr, ctx, "KeyWithIntegerValue.key");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* KeyWithIntegerValue::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:KeyWithIntegerValue)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string key = 1;
  if (this->key().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_key().data(), static_cast<int>(this->_internal_key().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "KeyWithIntegerValue.key");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_key(), target);
  }

  // int32 value = 2;
  if (this->value() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:KeyWithIntegerValue)
  return target;
}

size_t KeyWithIntegerValue::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:KeyWithIntegerValue)
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

  // int32 value = 2;
  if (this->value() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
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

void KeyWithIntegerValue::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:KeyWithIntegerValue)
  GOOGLE_DCHECK_NE(&from, this);
  const KeyWithIntegerValue* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<KeyWithIntegerValue>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:KeyWithIntegerValue)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:KeyWithIntegerValue)
    MergeFrom(*source);
  }
}

void KeyWithIntegerValue::MergeFrom(const KeyWithIntegerValue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:KeyWithIntegerValue)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.key().size() > 0) {

    key_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  if (from.value() != 0) {
    _internal_set_value(from._internal_value());
  }
}

void KeyWithIntegerValue::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:KeyWithIntegerValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KeyWithIntegerValue::CopyFrom(const KeyWithIntegerValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:KeyWithIntegerValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KeyWithIntegerValue::IsInitialized() const {
  return true;
}

void KeyWithIntegerValue::InternalSwap(KeyWithIntegerValue* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  key_.Swap(&other->key_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(value_, other->value_);
}

::PROTOBUF_NAMESPACE_ID::Metadata KeyWithIntegerValue::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::KeyWithIntegerValue* Arena::CreateMaybeMessage< ::KeyWithIntegerValue >(Arena* arena) {
  return Arena::CreateInternal< ::KeyWithIntegerValue >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>