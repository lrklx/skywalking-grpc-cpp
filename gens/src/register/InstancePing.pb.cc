// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: register/InstancePing.proto

#include "register/InstancePing.pb.h"

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
class ServiceInstancePingPkgDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ServiceInstancePingPkg> _instance;
} _ServiceInstancePingPkg_default_instance_;
static void InitDefaultsscc_info_ServiceInstancePingPkg_register_2fInstancePing_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ServiceInstancePingPkg_default_instance_;
    new (ptr) ::ServiceInstancePingPkg();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ServiceInstancePingPkg::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ServiceInstancePingPkg_register_2fInstancePing_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ServiceInstancePingPkg_register_2fInstancePing_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_register_2fInstancePing_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_register_2fInstancePing_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_register_2fInstancePing_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_register_2fInstancePing_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ServiceInstancePingPkg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ServiceInstancePingPkg, serviceinstanceid_),
  PROTOBUF_FIELD_OFFSET(::ServiceInstancePingPkg, time_),
  PROTOBUF_FIELD_OFFSET(::ServiceInstancePingPkg, serviceinstanceuuid_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ServiceInstancePingPkg)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_ServiceInstancePingPkg_default_instance_),
};

const char descriptor_table_protodef_register_2fInstancePing_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033register/InstancePing.proto\032\023common/co"
  "mmon.proto\"^\n\026ServiceInstancePingPkg\022\031\n\021"
  "serviceInstanceId\030\001 \001(\005\022\014\n\004time\030\002 \001(\003\022\033\n"
  "\023serviceInstanceUUID\030\003 \001(\t2E\n\023ServiceIns"
  "tancePing\022.\n\006doPing\022\027.ServiceInstancePin"
  "gPkg\032\t.Commands\"\000BN\n-org.apache.skywalki"
  "ng.apm.network.register.v2P\001\252\002\032SkyWalkin"
  "g.NetworkProtocolb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_register_2fInstancePing_2eproto_deps[1] = {
  &::descriptor_table_common_2fcommon_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_register_2fInstancePing_2eproto_sccs[1] = {
  &scc_info_ServiceInstancePingPkg_register_2fInstancePing_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_register_2fInstancePing_2eproto_once;
static bool descriptor_table_register_2fInstancePing_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_register_2fInstancePing_2eproto = {
  &descriptor_table_register_2fInstancePing_2eproto_initialized, descriptor_table_protodef_register_2fInstancePing_2eproto, "register/InstancePing.proto", 305,
  &descriptor_table_register_2fInstancePing_2eproto_once, descriptor_table_register_2fInstancePing_2eproto_sccs, descriptor_table_register_2fInstancePing_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_register_2fInstancePing_2eproto::offsets,
  file_level_metadata_register_2fInstancePing_2eproto, 1, file_level_enum_descriptors_register_2fInstancePing_2eproto, file_level_service_descriptors_register_2fInstancePing_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_register_2fInstancePing_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_register_2fInstancePing_2eproto), true);

// ===================================================================

void ServiceInstancePingPkg::InitAsDefaultInstance() {
}
class ServiceInstancePingPkg::_Internal {
 public:
};

ServiceInstancePingPkg::ServiceInstancePingPkg()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ServiceInstancePingPkg)
}
ServiceInstancePingPkg::ServiceInstancePingPkg(const ServiceInstancePingPkg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  serviceinstanceuuid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_serviceinstanceuuid().empty()) {
    serviceinstanceuuid_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.serviceinstanceuuid_);
  }
  ::memcpy(&time_, &from.time_,
    static_cast<size_t>(reinterpret_cast<char*>(&serviceinstanceid_) -
    reinterpret_cast<char*>(&time_)) + sizeof(serviceinstanceid_));
  // @@protoc_insertion_point(copy_constructor:ServiceInstancePingPkg)
}

void ServiceInstancePingPkg::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ServiceInstancePingPkg_register_2fInstancePing_2eproto.base);
  serviceinstanceuuid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&serviceinstanceid_) -
      reinterpret_cast<char*>(&time_)) + sizeof(serviceinstanceid_));
}

ServiceInstancePingPkg::~ServiceInstancePingPkg() {
  // @@protoc_insertion_point(destructor:ServiceInstancePingPkg)
  SharedDtor();
}

void ServiceInstancePingPkg::SharedDtor() {
  serviceinstanceuuid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ServiceInstancePingPkg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ServiceInstancePingPkg& ServiceInstancePingPkg::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ServiceInstancePingPkg_register_2fInstancePing_2eproto.base);
  return *internal_default_instance();
}


void ServiceInstancePingPkg::Clear() {
// @@protoc_insertion_point(message_clear_start:ServiceInstancePingPkg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  serviceinstanceuuid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&serviceinstanceid_) -
      reinterpret_cast<char*>(&time_)) + sizeof(serviceinstanceid_));
  _internal_metadata_.Clear();
}

const char* ServiceInstancePingPkg::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 serviceInstanceId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          serviceinstanceid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 time = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          time_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string serviceInstanceUUID = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_serviceinstanceuuid(), ptr, ctx, "ServiceInstancePingPkg.serviceInstanceUUID");
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

::PROTOBUF_NAMESPACE_ID::uint8* ServiceInstancePingPkg::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ServiceInstancePingPkg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 serviceInstanceId = 1;
  if (this->serviceinstanceid() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_serviceinstanceid(), target);
  }

  // int64 time = 2;
  if (this->time() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(2, this->_internal_time(), target);
  }

  // string serviceInstanceUUID = 3;
  if (this->serviceinstanceuuid().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_serviceinstanceuuid().data(), static_cast<int>(this->_internal_serviceinstanceuuid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ServiceInstancePingPkg.serviceInstanceUUID");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_serviceinstanceuuid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ServiceInstancePingPkg)
  return target;
}

size_t ServiceInstancePingPkg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ServiceInstancePingPkg)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string serviceInstanceUUID = 3;
  if (this->serviceinstanceuuid().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_serviceinstanceuuid());
  }

  // int64 time = 2;
  if (this->time() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_time());
  }

  // int32 serviceInstanceId = 1;
  if (this->serviceinstanceid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_serviceinstanceid());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ServiceInstancePingPkg::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ServiceInstancePingPkg)
  GOOGLE_DCHECK_NE(&from, this);
  const ServiceInstancePingPkg* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ServiceInstancePingPkg>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ServiceInstancePingPkg)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ServiceInstancePingPkg)
    MergeFrom(*source);
  }
}

void ServiceInstancePingPkg::MergeFrom(const ServiceInstancePingPkg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ServiceInstancePingPkg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.serviceinstanceuuid().size() > 0) {

    serviceinstanceuuid_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.serviceinstanceuuid_);
  }
  if (from.time() != 0) {
    _internal_set_time(from._internal_time());
  }
  if (from.serviceinstanceid() != 0) {
    _internal_set_serviceinstanceid(from._internal_serviceinstanceid());
  }
}

void ServiceInstancePingPkg::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ServiceInstancePingPkg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServiceInstancePingPkg::CopyFrom(const ServiceInstancePingPkg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ServiceInstancePingPkg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServiceInstancePingPkg::IsInitialized() const {
  return true;
}

void ServiceInstancePingPkg::InternalSwap(ServiceInstancePingPkg* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  serviceinstanceuuid_.Swap(&other->serviceinstanceuuid_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(time_, other->time_);
  swap(serviceinstanceid_, other->serviceinstanceid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ServiceInstancePingPkg::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ServiceInstancePingPkg* Arena::CreateMaybeMessage< ::ServiceInstancePingPkg >(Arena* arena) {
  return Arena::CreateInternal< ::ServiceInstancePingPkg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>