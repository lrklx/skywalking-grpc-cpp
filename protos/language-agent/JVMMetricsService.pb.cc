// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: language-agent/JVMMetricsService.proto

#include "language-agent/JVMMetricsService.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_common_2fJVM_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<4> scc_info_JVMMetric_common_2fJVM_2eproto;
class JVMMetricsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<JVMMetrics> _instance;
} _JVMMetrics_default_instance_;
static void InitDefaultsscc_info_JVMMetrics_language_2dagent_2fJVMMetricsService_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_JVMMetrics_default_instance_;
    new (ptr) ::JVMMetrics();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::JVMMetrics::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_JVMMetrics_language_2dagent_2fJVMMetricsService_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_JVMMetrics_language_2dagent_2fJVMMetricsService_2eproto}, {
      &scc_info_JVMMetric_common_2fJVM_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_language_2dagent_2fJVMMetricsService_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_language_2dagent_2fJVMMetricsService_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_language_2dagent_2fJVMMetricsService_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_language_2dagent_2fJVMMetricsService_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::JVMMetrics, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::JVMMetrics, metrics_),
  PROTOBUF_FIELD_OFFSET(::JVMMetrics, applicationinstanceid_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::JVMMetrics)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_JVMMetrics_default_instance_),
};

const char descriptor_table_protodef_language_2dagent_2fJVMMetricsService_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n&language-agent/JVMMetricsService.proto"
  "\032\037language-agent/Downstream.proto\032\020commo"
  "n/JVM.proto\"H\n\nJVMMetrics\022\033\n\007metrics\030\001 \003"
  "(\0132\n.JVMMetric\022\035\n\025applicationInstanceId\030"
  "\002 \001(\0052:\n\021JVMMetricsService\022%\n\007collect\022\013."
  "JVMMetrics\032\013.Downstream\"\000BQ\n0org.apache."
  "skywalking.apm.network.language.agentP\001\252"
  "\002\032SkyWalking.NetworkProtocolb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_language_2dagent_2fJVMMetricsService_2eproto_deps[2] = {
  &::descriptor_table_common_2fJVM_2eproto,
  &::descriptor_table_language_2dagent_2fDownstream_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_language_2dagent_2fJVMMetricsService_2eproto_sccs[1] = {
  &scc_info_JVMMetrics_language_2dagent_2fJVMMetricsService_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_language_2dagent_2fJVMMetricsService_2eproto_once;
static bool descriptor_table_language_2dagent_2fJVMMetricsService_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_language_2dagent_2fJVMMetricsService_2eproto = {
  &descriptor_table_language_2dagent_2fJVMMetricsService_2eproto_initialized, descriptor_table_protodef_language_2dagent_2fJVMMetricsService_2eproto, "language-agent/JVMMetricsService.proto", 316,
  &descriptor_table_language_2dagent_2fJVMMetricsService_2eproto_once, descriptor_table_language_2dagent_2fJVMMetricsService_2eproto_sccs, descriptor_table_language_2dagent_2fJVMMetricsService_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_language_2dagent_2fJVMMetricsService_2eproto::offsets,
  file_level_metadata_language_2dagent_2fJVMMetricsService_2eproto, 1, file_level_enum_descriptors_language_2dagent_2fJVMMetricsService_2eproto, file_level_service_descriptors_language_2dagent_2fJVMMetricsService_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_language_2dagent_2fJVMMetricsService_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_language_2dagent_2fJVMMetricsService_2eproto), true);

// ===================================================================

void JVMMetrics::InitAsDefaultInstance() {
}
class JVMMetrics::_Internal {
 public:
};

void JVMMetrics::clear_metrics() {
  metrics_.Clear();
}
JVMMetrics::JVMMetrics()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:JVMMetrics)
}
JVMMetrics::JVMMetrics(const JVMMetrics& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      metrics_(from.metrics_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  applicationinstanceid_ = from.applicationinstanceid_;
  // @@protoc_insertion_point(copy_constructor:JVMMetrics)
}

void JVMMetrics::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_JVMMetrics_language_2dagent_2fJVMMetricsService_2eproto.base);
  applicationinstanceid_ = 0;
}

JVMMetrics::~JVMMetrics() {
  // @@protoc_insertion_point(destructor:JVMMetrics)
  SharedDtor();
}

void JVMMetrics::SharedDtor() {
}

void JVMMetrics::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const JVMMetrics& JVMMetrics::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_JVMMetrics_language_2dagent_2fJVMMetricsService_2eproto.base);
  return *internal_default_instance();
}


void JVMMetrics::Clear() {
// @@protoc_insertion_point(message_clear_start:JVMMetrics)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  metrics_.Clear();
  applicationinstanceid_ = 0;
  _internal_metadata_.Clear();
}

const char* JVMMetrics::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .JVMMetric metrics = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_metrics(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // int32 applicationInstanceId = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          applicationinstanceid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* JVMMetrics::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:JVMMetrics)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .JVMMetric metrics = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_metrics_size()); i < n; i++) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(1, this->_internal_metrics(i), target, stream);
  }

  // int32 applicationInstanceId = 2;
  if (this->applicationinstanceid() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_applicationinstanceid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:JVMMetrics)
  return target;
}

size_t JVMMetrics::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:JVMMetrics)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .JVMMetric metrics = 1;
  total_size += 1UL * this->_internal_metrics_size();
  for (const auto& msg : this->metrics_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // int32 applicationInstanceId = 2;
  if (this->applicationinstanceid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_applicationinstanceid());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void JVMMetrics::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:JVMMetrics)
  GOOGLE_DCHECK_NE(&from, this);
  const JVMMetrics* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<JVMMetrics>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:JVMMetrics)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:JVMMetrics)
    MergeFrom(*source);
  }
}

void JVMMetrics::MergeFrom(const JVMMetrics& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:JVMMetrics)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  metrics_.MergeFrom(from.metrics_);
  if (from.applicationinstanceid() != 0) {
    _internal_set_applicationinstanceid(from._internal_applicationinstanceid());
  }
}

void JVMMetrics::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:JVMMetrics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void JVMMetrics::CopyFrom(const JVMMetrics& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:JVMMetrics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool JVMMetrics::IsInitialized() const {
  return true;
}

void JVMMetrics::InternalSwap(JVMMetrics* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  metrics_.InternalSwap(&other->metrics_);
  swap(applicationinstanceid_, other->applicationinstanceid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata JVMMetrics::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::JVMMetrics* Arena::CreateMaybeMessage< ::JVMMetrics >(Arena* arena) {
  return Arena::CreateInternal< ::JVMMetrics >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>