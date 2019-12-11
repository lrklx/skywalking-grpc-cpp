// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/CLR.proto

#include "common/CLR.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_common_2fcommon_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_CPU_common_2fcommon_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_common_2fCLR_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ClrGC_common_2fCLR_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_common_2fCLR_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ClrThread_common_2fCLR_2eproto;
class CLRMetricDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CLRMetric> _instance;
} _CLRMetric_default_instance_;
class ClrGCDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ClrGC> _instance;
} _ClrGC_default_instance_;
class ClrThreadDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ClrThread> _instance;
} _ClrThread_default_instance_;
static void InitDefaultsscc_info_CLRMetric_common_2fCLR_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_CLRMetric_default_instance_;
    new (ptr) ::CLRMetric();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::CLRMetric::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_CLRMetric_common_2fCLR_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 3, 0, InitDefaultsscc_info_CLRMetric_common_2fCLR_2eproto}, {
      &scc_info_CPU_common_2fcommon_2eproto.base,
      &scc_info_ClrGC_common_2fCLR_2eproto.base,
      &scc_info_ClrThread_common_2fCLR_2eproto.base,}};

static void InitDefaultsscc_info_ClrGC_common_2fCLR_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ClrGC_default_instance_;
    new (ptr) ::ClrGC();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ClrGC::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ClrGC_common_2fCLR_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ClrGC_common_2fCLR_2eproto}, {}};

static void InitDefaultsscc_info_ClrThread_common_2fCLR_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ClrThread_default_instance_;
    new (ptr) ::ClrThread();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ClrThread::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ClrThread_common_2fCLR_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ClrThread_common_2fCLR_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_common_2fCLR_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_common_2fCLR_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_common_2fCLR_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_common_2fCLR_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::CLRMetric, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::CLRMetric, time_),
  PROTOBUF_FIELD_OFFSET(::CLRMetric, cpu_),
  PROTOBUF_FIELD_OFFSET(::CLRMetric, gc_),
  PROTOBUF_FIELD_OFFSET(::CLRMetric, thread_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ClrGC, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ClrGC, gen0collectcount_),
  PROTOBUF_FIELD_OFFSET(::ClrGC, gen1collectcount_),
  PROTOBUF_FIELD_OFFSET(::ClrGC, gen2collectcount_),
  PROTOBUF_FIELD_OFFSET(::ClrGC, heapmemory_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ClrThread, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ClrThread, availablecompletionportthreads_),
  PROTOBUF_FIELD_OFFSET(::ClrThread, availableworkerthreads_),
  PROTOBUF_FIELD_OFFSET(::ClrThread, maxcompletionportthreads_),
  PROTOBUF_FIELD_OFFSET(::ClrThread, maxworkerthreads_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::CLRMetric)},
  { 9, -1, sizeof(::ClrGC)},
  { 18, -1, sizeof(::ClrThread)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_CLRMetric_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_ClrGC_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_ClrThread_default_instance_),
};

const char descriptor_table_protodef_common_2fCLR_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\020common/CLR.proto\032\023common/common.proto\""
  "\\\n\tCLRMetric\022\014\n\004time\030\001 \001(\003\022\021\n\003cpu\030\002 \001(\0132"
  "\004.CPU\022\022\n\002gc\030\003 \001(\0132\006.ClrGC\022\032\n\006thread\030\004 \001("
  "\0132\n.ClrThread\"i\n\005ClrGC\022\030\n\020Gen0CollectCou"
  "nt\030\001 \001(\003\022\030\n\020Gen1CollectCount\030\002 \001(\003\022\030\n\020Ge"
  "n2CollectCount\030\003 \001(\003\022\022\n\nHeapMemory\030\004 \001(\003"
  "\"\217\001\n\tClrThread\022&\n\036AvailableCompletionPor"
  "tThreads\030\001 \001(\005\022\036\n\026AvailableWorkerThreads"
  "\030\002 \001(\005\022 \n\030MaxCompletionPortThreads\030\003 \001(\005"
  "\022\030\n\020MaxWorkerThreads\030\004 \001(\005BQ\n0org.apache"
  ".skywalking.apm.network.language.agentP\001"
  "\252\002\032SkyWalking.NetworkProtocolb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_common_2fCLR_2eproto_deps[1] = {
  &::descriptor_table_common_2fcommon_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_common_2fCLR_2eproto_sccs[3] = {
  &scc_info_CLRMetric_common_2fCLR_2eproto.base,
  &scc_info_ClrGC_common_2fCLR_2eproto.base,
  &scc_info_ClrThread_common_2fCLR_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_common_2fCLR_2eproto_once;
static bool descriptor_table_common_2fCLR_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_common_2fCLR_2eproto = {
  &descriptor_table_common_2fCLR_2eproto_initialized, descriptor_table_protodef_common_2fCLR_2eproto, "common/CLR.proto", 477,
  &descriptor_table_common_2fCLR_2eproto_once, descriptor_table_common_2fCLR_2eproto_sccs, descriptor_table_common_2fCLR_2eproto_deps, 3, 1,
  schemas, file_default_instances, TableStruct_common_2fCLR_2eproto::offsets,
  file_level_metadata_common_2fCLR_2eproto, 3, file_level_enum_descriptors_common_2fCLR_2eproto, file_level_service_descriptors_common_2fCLR_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_common_2fCLR_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_common_2fCLR_2eproto), true);

// ===================================================================

void CLRMetric::InitAsDefaultInstance() {
  ::_CLRMetric_default_instance_._instance.get_mutable()->cpu_ = const_cast< ::CPU*>(
      ::CPU::internal_default_instance());
  ::_CLRMetric_default_instance_._instance.get_mutable()->gc_ = const_cast< ::ClrGC*>(
      ::ClrGC::internal_default_instance());
  ::_CLRMetric_default_instance_._instance.get_mutable()->thread_ = const_cast< ::ClrThread*>(
      ::ClrThread::internal_default_instance());
}
class CLRMetric::_Internal {
 public:
  static const ::CPU& cpu(const CLRMetric* msg);
  static const ::ClrGC& gc(const CLRMetric* msg);
  static const ::ClrThread& thread(const CLRMetric* msg);
};

const ::CPU&
CLRMetric::_Internal::cpu(const CLRMetric* msg) {
  return *msg->cpu_;
}
const ::ClrGC&
CLRMetric::_Internal::gc(const CLRMetric* msg) {
  return *msg->gc_;
}
const ::ClrThread&
CLRMetric::_Internal::thread(const CLRMetric* msg) {
  return *msg->thread_;
}
void CLRMetric::clear_cpu() {
  if (GetArenaNoVirtual() == nullptr && cpu_ != nullptr) {
    delete cpu_;
  }
  cpu_ = nullptr;
}
CLRMetric::CLRMetric()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:CLRMetric)
}
CLRMetric::CLRMetric(const CLRMetric& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_cpu()) {
    cpu_ = new ::CPU(*from.cpu_);
  } else {
    cpu_ = nullptr;
  }
  if (from._internal_has_gc()) {
    gc_ = new ::ClrGC(*from.gc_);
  } else {
    gc_ = nullptr;
  }
  if (from._internal_has_thread()) {
    thread_ = new ::ClrThread(*from.thread_);
  } else {
    thread_ = nullptr;
  }
  time_ = from.time_;
  // @@protoc_insertion_point(copy_constructor:CLRMetric)
}

void CLRMetric::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_CLRMetric_common_2fCLR_2eproto.base);
  ::memset(&cpu_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&time_) -
      reinterpret_cast<char*>(&cpu_)) + sizeof(time_));
}

CLRMetric::~CLRMetric() {
  // @@protoc_insertion_point(destructor:CLRMetric)
  SharedDtor();
}

void CLRMetric::SharedDtor() {
  if (this != internal_default_instance()) delete cpu_;
  if (this != internal_default_instance()) delete gc_;
  if (this != internal_default_instance()) delete thread_;
}

void CLRMetric::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CLRMetric& CLRMetric::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CLRMetric_common_2fCLR_2eproto.base);
  return *internal_default_instance();
}


void CLRMetric::Clear() {
// @@protoc_insertion_point(message_clear_start:CLRMetric)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && cpu_ != nullptr) {
    delete cpu_;
  }
  cpu_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && gc_ != nullptr) {
    delete gc_;
  }
  gc_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && thread_ != nullptr) {
    delete thread_;
  }
  thread_ = nullptr;
  time_ = PROTOBUF_LONGLONG(0);
  _internal_metadata_.Clear();
}

const char* CLRMetric::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int64 time = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          time_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .CPU cpu = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_cpu(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .ClrGC gc = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_gc(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .ClrThread thread = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_thread(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* CLRMetric::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:CLRMetric)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 time = 1;
  if (this->time() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->_internal_time(), target);
  }

  // .CPU cpu = 2;
  if (this->has_cpu()) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, _Internal::cpu(this), target, stream);
  }

  // .ClrGC gc = 3;
  if (this->has_gc()) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, _Internal::gc(this), target, stream);
  }

  // .ClrThread thread = 4;
  if (this->has_thread()) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, _Internal::thread(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CLRMetric)
  return target;
}

size_t CLRMetric::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CLRMetric)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .CPU cpu = 2;
  if (this->has_cpu()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *cpu_);
  }

  // .ClrGC gc = 3;
  if (this->has_gc()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *gc_);
  }

  // .ClrThread thread = 4;
  if (this->has_thread()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *thread_);
  }

  // int64 time = 1;
  if (this->time() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_time());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CLRMetric::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:CLRMetric)
  GOOGLE_DCHECK_NE(&from, this);
  const CLRMetric* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CLRMetric>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:CLRMetric)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:CLRMetric)
    MergeFrom(*source);
  }
}

void CLRMetric::MergeFrom(const CLRMetric& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CLRMetric)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_cpu()) {
    _internal_mutable_cpu()->::CPU::MergeFrom(from._internal_cpu());
  }
  if (from.has_gc()) {
    _internal_mutable_gc()->::ClrGC::MergeFrom(from._internal_gc());
  }
  if (from.has_thread()) {
    _internal_mutable_thread()->::ClrThread::MergeFrom(from._internal_thread());
  }
  if (from.time() != 0) {
    _internal_set_time(from._internal_time());
  }
}

void CLRMetric::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:CLRMetric)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CLRMetric::CopyFrom(const CLRMetric& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CLRMetric)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CLRMetric::IsInitialized() const {
  return true;
}

void CLRMetric::InternalSwap(CLRMetric* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(cpu_, other->cpu_);
  swap(gc_, other->gc_);
  swap(thread_, other->thread_);
  swap(time_, other->time_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CLRMetric::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void ClrGC::InitAsDefaultInstance() {
}
class ClrGC::_Internal {
 public:
};

ClrGC::ClrGC()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ClrGC)
}
ClrGC::ClrGC(const ClrGC& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&gen0collectcount_, &from.gen0collectcount_,
    static_cast<size_t>(reinterpret_cast<char*>(&heapmemory_) -
    reinterpret_cast<char*>(&gen0collectcount_)) + sizeof(heapmemory_));
  // @@protoc_insertion_point(copy_constructor:ClrGC)
}

void ClrGC::SharedCtor() {
  ::memset(&gen0collectcount_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&heapmemory_) -
      reinterpret_cast<char*>(&gen0collectcount_)) + sizeof(heapmemory_));
}

ClrGC::~ClrGC() {
  // @@protoc_insertion_point(destructor:ClrGC)
  SharedDtor();
}

void ClrGC::SharedDtor() {
}

void ClrGC::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ClrGC& ClrGC::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ClrGC_common_2fCLR_2eproto.base);
  return *internal_default_instance();
}


void ClrGC::Clear() {
// @@protoc_insertion_point(message_clear_start:ClrGC)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&gen0collectcount_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&heapmemory_) -
      reinterpret_cast<char*>(&gen0collectcount_)) + sizeof(heapmemory_));
  _internal_metadata_.Clear();
}

const char* ClrGC::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int64 Gen0CollectCount = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          gen0collectcount_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 Gen1CollectCount = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          gen1collectcount_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 Gen2CollectCount = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          gen2collectcount_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 HeapMemory = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          heapmemory_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ClrGC::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ClrGC)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 Gen0CollectCount = 1;
  if (this->gen0collectcount() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->_internal_gen0collectcount(), target);
  }

  // int64 Gen1CollectCount = 2;
  if (this->gen1collectcount() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(2, this->_internal_gen1collectcount(), target);
  }

  // int64 Gen2CollectCount = 3;
  if (this->gen2collectcount() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(3, this->_internal_gen2collectcount(), target);
  }

  // int64 HeapMemory = 4;
  if (this->heapmemory() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(4, this->_internal_heapmemory(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ClrGC)
  return target;
}

size_t ClrGC::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ClrGC)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int64 Gen0CollectCount = 1;
  if (this->gen0collectcount() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_gen0collectcount());
  }

  // int64 Gen1CollectCount = 2;
  if (this->gen1collectcount() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_gen1collectcount());
  }

  // int64 Gen2CollectCount = 3;
  if (this->gen2collectcount() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_gen2collectcount());
  }

  // int64 HeapMemory = 4;
  if (this->heapmemory() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_heapmemory());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ClrGC::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ClrGC)
  GOOGLE_DCHECK_NE(&from, this);
  const ClrGC* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ClrGC>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ClrGC)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ClrGC)
    MergeFrom(*source);
  }
}

void ClrGC::MergeFrom(const ClrGC& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ClrGC)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.gen0collectcount() != 0) {
    _internal_set_gen0collectcount(from._internal_gen0collectcount());
  }
  if (from.gen1collectcount() != 0) {
    _internal_set_gen1collectcount(from._internal_gen1collectcount());
  }
  if (from.gen2collectcount() != 0) {
    _internal_set_gen2collectcount(from._internal_gen2collectcount());
  }
  if (from.heapmemory() != 0) {
    _internal_set_heapmemory(from._internal_heapmemory());
  }
}

void ClrGC::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ClrGC)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClrGC::CopyFrom(const ClrGC& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ClrGC)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClrGC::IsInitialized() const {
  return true;
}

void ClrGC::InternalSwap(ClrGC* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(gen0collectcount_, other->gen0collectcount_);
  swap(gen1collectcount_, other->gen1collectcount_);
  swap(gen2collectcount_, other->gen2collectcount_);
  swap(heapmemory_, other->heapmemory_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ClrGC::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void ClrThread::InitAsDefaultInstance() {
}
class ClrThread::_Internal {
 public:
};

ClrThread::ClrThread()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ClrThread)
}
ClrThread::ClrThread(const ClrThread& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&availablecompletionportthreads_, &from.availablecompletionportthreads_,
    static_cast<size_t>(reinterpret_cast<char*>(&maxworkerthreads_) -
    reinterpret_cast<char*>(&availablecompletionportthreads_)) + sizeof(maxworkerthreads_));
  // @@protoc_insertion_point(copy_constructor:ClrThread)
}

void ClrThread::SharedCtor() {
  ::memset(&availablecompletionportthreads_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&maxworkerthreads_) -
      reinterpret_cast<char*>(&availablecompletionportthreads_)) + sizeof(maxworkerthreads_));
}

ClrThread::~ClrThread() {
  // @@protoc_insertion_point(destructor:ClrThread)
  SharedDtor();
}

void ClrThread::SharedDtor() {
}

void ClrThread::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ClrThread& ClrThread::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ClrThread_common_2fCLR_2eproto.base);
  return *internal_default_instance();
}


void ClrThread::Clear() {
// @@protoc_insertion_point(message_clear_start:ClrThread)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&availablecompletionportthreads_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&maxworkerthreads_) -
      reinterpret_cast<char*>(&availablecompletionportthreads_)) + sizeof(maxworkerthreads_));
  _internal_metadata_.Clear();
}

const char* ClrThread::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 AvailableCompletionPortThreads = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          availablecompletionportthreads_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 AvailableWorkerThreads = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          availableworkerthreads_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 MaxCompletionPortThreads = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          maxcompletionportthreads_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 MaxWorkerThreads = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          maxworkerthreads_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ClrThread::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ClrThread)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 AvailableCompletionPortThreads = 1;
  if (this->availablecompletionportthreads() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_availablecompletionportthreads(), target);
  }

  // int32 AvailableWorkerThreads = 2;
  if (this->availableworkerthreads() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_availableworkerthreads(), target);
  }

  // int32 MaxCompletionPortThreads = 3;
  if (this->maxcompletionportthreads() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_maxcompletionportthreads(), target);
  }

  // int32 MaxWorkerThreads = 4;
  if (this->maxworkerthreads() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_maxworkerthreads(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ClrThread)
  return target;
}

size_t ClrThread::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ClrThread)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 AvailableCompletionPortThreads = 1;
  if (this->availablecompletionportthreads() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_availablecompletionportthreads());
  }

  // int32 AvailableWorkerThreads = 2;
  if (this->availableworkerthreads() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_availableworkerthreads());
  }

  // int32 MaxCompletionPortThreads = 3;
  if (this->maxcompletionportthreads() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_maxcompletionportthreads());
  }

  // int32 MaxWorkerThreads = 4;
  if (this->maxworkerthreads() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_maxworkerthreads());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ClrThread::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ClrThread)
  GOOGLE_DCHECK_NE(&from, this);
  const ClrThread* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ClrThread>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ClrThread)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ClrThread)
    MergeFrom(*source);
  }
}

void ClrThread::MergeFrom(const ClrThread& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ClrThread)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.availablecompletionportthreads() != 0) {
    _internal_set_availablecompletionportthreads(from._internal_availablecompletionportthreads());
  }
  if (from.availableworkerthreads() != 0) {
    _internal_set_availableworkerthreads(from._internal_availableworkerthreads());
  }
  if (from.maxcompletionportthreads() != 0) {
    _internal_set_maxcompletionportthreads(from._internal_maxcompletionportthreads());
  }
  if (from.maxworkerthreads() != 0) {
    _internal_set_maxworkerthreads(from._internal_maxworkerthreads());
  }
}

void ClrThread::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ClrThread)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClrThread::CopyFrom(const ClrThread& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ClrThread)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClrThread::IsInitialized() const {
  return true;
}

void ClrThread::InternalSwap(ClrThread* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(availablecompletionportthreads_, other->availablecompletionportthreads_);
  swap(availableworkerthreads_, other->availableworkerthreads_);
  swap(maxcompletionportthreads_, other->maxcompletionportthreads_);
  swap(maxworkerthreads_, other->maxworkerthreads_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ClrThread::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::CLRMetric* Arena::CreateMaybeMessage< ::CLRMetric >(Arena* arena) {
  return Arena::CreateInternal< ::CLRMetric >(arena);
}
template<> PROTOBUF_NOINLINE ::ClrGC* Arena::CreateMaybeMessage< ::ClrGC >(Arena* arena) {
  return Arena::CreateInternal< ::ClrGC >(arena);
}
template<> PROTOBUF_NOINLINE ::ClrThread* Arena::CreateMaybeMessage< ::ClrThread >(Arena* arena) {
  return Arena::CreateInternal< ::ClrThread >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
