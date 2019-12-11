// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/trace-common.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_common_2ftrace_2dcommon_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_common_2ftrace_2dcommon_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_common_2ftrace_2dcommon_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_common_2ftrace_2dcommon_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_common_2ftrace_2dcommon_2eproto;
class UniqueId;
class UniqueIdDefaultTypeInternal;
extern UniqueIdDefaultTypeInternal _UniqueId_default_instance_;
class UpstreamSegment;
class UpstreamSegmentDefaultTypeInternal;
extern UpstreamSegmentDefaultTypeInternal _UpstreamSegment_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::UniqueId* Arena::CreateMaybeMessage<::UniqueId>(Arena*);
template<> ::UpstreamSegment* Arena::CreateMaybeMessage<::UpstreamSegment>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum SpanType : int {
  Entry = 0,
  Exit = 1,
  Local = 2,
  SpanType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  SpanType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool SpanType_IsValid(int value);
constexpr SpanType SpanType_MIN = Entry;
constexpr SpanType SpanType_MAX = Local;
constexpr int SpanType_ARRAYSIZE = SpanType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SpanType_descriptor();
template<typename T>
inline const std::string& SpanType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SpanType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SpanType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SpanType_descriptor(), enum_t_value);
}
inline bool SpanType_Parse(
    const std::string& name, SpanType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SpanType>(
    SpanType_descriptor(), name, value);
}
enum RefType : int {
  CrossProcess = 0,
  CrossThread = 1,
  RefType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  RefType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool RefType_IsValid(int value);
constexpr RefType RefType_MIN = CrossProcess;
constexpr RefType RefType_MAX = CrossThread;
constexpr int RefType_ARRAYSIZE = RefType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RefType_descriptor();
template<typename T>
inline const std::string& RefType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, RefType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function RefType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    RefType_descriptor(), enum_t_value);
}
inline bool RefType_Parse(
    const std::string& name, RefType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<RefType>(
    RefType_descriptor(), name, value);
}
enum SpanLayer : int {
  Unknown = 0,
  Database = 1,
  RPCFramework = 2,
  Http = 3,
  MQ = 4,
  Cache = 5,
  SpanLayer_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  SpanLayer_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool SpanLayer_IsValid(int value);
constexpr SpanLayer SpanLayer_MIN = Unknown;
constexpr SpanLayer SpanLayer_MAX = Cache;
constexpr int SpanLayer_ARRAYSIZE = SpanLayer_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SpanLayer_descriptor();
template<typename T>
inline const std::string& SpanLayer_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SpanLayer>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SpanLayer_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SpanLayer_descriptor(), enum_t_value);
}
inline bool SpanLayer_Parse(
    const std::string& name, SpanLayer* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SpanLayer>(
    SpanLayer_descriptor(), name, value);
}
// ===================================================================

class UpstreamSegment :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:UpstreamSegment) */ {
 public:
  UpstreamSegment();
  virtual ~UpstreamSegment();

  UpstreamSegment(const UpstreamSegment& from);
  UpstreamSegment(UpstreamSegment&& from) noexcept
    : UpstreamSegment() {
    *this = ::std::move(from);
  }

  inline UpstreamSegment& operator=(const UpstreamSegment& from) {
    CopyFrom(from);
    return *this;
  }
  inline UpstreamSegment& operator=(UpstreamSegment&& from) noexcept {
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
  static const UpstreamSegment& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UpstreamSegment* internal_default_instance() {
    return reinterpret_cast<const UpstreamSegment*>(
               &_UpstreamSegment_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(UpstreamSegment& a, UpstreamSegment& b) {
    a.Swap(&b);
  }
  inline void Swap(UpstreamSegment* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline UpstreamSegment* New() const final {
    return CreateMaybeMessage<UpstreamSegment>(nullptr);
  }

  UpstreamSegment* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<UpstreamSegment>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const UpstreamSegment& from);
  void MergeFrom(const UpstreamSegment& from);
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
  void InternalSwap(UpstreamSegment* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "UpstreamSegment";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_common_2ftrace_2dcommon_2eproto);
    return ::descriptor_table_common_2ftrace_2dcommon_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGlobalTraceIdsFieldNumber = 1,
    kSegmentFieldNumber = 2,
  };
  // repeated .UniqueId globalTraceIds = 1;
  int globaltraceids_size() const;
  private:
  int _internal_globaltraceids_size() const;
  public:
  void clear_globaltraceids();
  ::UniqueId* mutable_globaltraceids(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::UniqueId >*
      mutable_globaltraceids();
  private:
  const ::UniqueId& _internal_globaltraceids(int index) const;
  ::UniqueId* _internal_add_globaltraceids();
  public:
  const ::UniqueId& globaltraceids(int index) const;
  ::UniqueId* add_globaltraceids();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::UniqueId >&
      globaltraceids() const;

  // bytes segment = 2;
  void clear_segment();
  const std::string& segment() const;
  void set_segment(const std::string& value);
  void set_segment(std::string&& value);
  void set_segment(const char* value);
  void set_segment(const void* value, size_t size);
  std::string* mutable_segment();
  std::string* release_segment();
  void set_allocated_segment(std::string* segment);
  private:
  const std::string& _internal_segment() const;
  void _internal_set_segment(const std::string& value);
  std::string* _internal_mutable_segment();
  public:

  // @@protoc_insertion_point(class_scope:UpstreamSegment)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::UniqueId > globaltraceids_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr segment_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2ftrace_2dcommon_2eproto;
};
// -------------------------------------------------------------------

class UniqueId :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:UniqueId) */ {
 public:
  UniqueId();
  virtual ~UniqueId();

  UniqueId(const UniqueId& from);
  UniqueId(UniqueId&& from) noexcept
    : UniqueId() {
    *this = ::std::move(from);
  }

  inline UniqueId& operator=(const UniqueId& from) {
    CopyFrom(from);
    return *this;
  }
  inline UniqueId& operator=(UniqueId&& from) noexcept {
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
  static const UniqueId& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UniqueId* internal_default_instance() {
    return reinterpret_cast<const UniqueId*>(
               &_UniqueId_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(UniqueId& a, UniqueId& b) {
    a.Swap(&b);
  }
  inline void Swap(UniqueId* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline UniqueId* New() const final {
    return CreateMaybeMessage<UniqueId>(nullptr);
  }

  UniqueId* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<UniqueId>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const UniqueId& from);
  void MergeFrom(const UniqueId& from);
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
  void InternalSwap(UniqueId* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "UniqueId";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_common_2ftrace_2dcommon_2eproto);
    return ::descriptor_table_common_2ftrace_2dcommon_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdPartsFieldNumber = 1,
  };
  // repeated int64 idParts = 1;
  int idparts_size() const;
  private:
  int _internal_idparts_size() const;
  public:
  void clear_idparts();
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_idparts(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
      _internal_idparts() const;
  void _internal_add_idparts(::PROTOBUF_NAMESPACE_ID::int64 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
      _internal_mutable_idparts();
  public:
  ::PROTOBUF_NAMESPACE_ID::int64 idparts(int index) const;
  void set_idparts(int index, ::PROTOBUF_NAMESPACE_ID::int64 value);
  void add_idparts(::PROTOBUF_NAMESPACE_ID::int64 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
      idparts() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
      mutable_idparts();

  // @@protoc_insertion_point(class_scope:UniqueId)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 > idparts_;
  mutable std::atomic<int> _idparts_cached_byte_size_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2ftrace_2dcommon_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UpstreamSegment

// repeated .UniqueId globalTraceIds = 1;
inline int UpstreamSegment::_internal_globaltraceids_size() const {
  return globaltraceids_.size();
}
inline int UpstreamSegment::globaltraceids_size() const {
  return _internal_globaltraceids_size();
}
inline void UpstreamSegment::clear_globaltraceids() {
  globaltraceids_.Clear();
}
inline ::UniqueId* UpstreamSegment::mutable_globaltraceids(int index) {
  // @@protoc_insertion_point(field_mutable:UpstreamSegment.globalTraceIds)
  return globaltraceids_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::UniqueId >*
UpstreamSegment::mutable_globaltraceids() {
  // @@protoc_insertion_point(field_mutable_list:UpstreamSegment.globalTraceIds)
  return &globaltraceids_;
}
inline const ::UniqueId& UpstreamSegment::_internal_globaltraceids(int index) const {
  return globaltraceids_.Get(index);
}
inline const ::UniqueId& UpstreamSegment::globaltraceids(int index) const {
  // @@protoc_insertion_point(field_get:UpstreamSegment.globalTraceIds)
  return _internal_globaltraceids(index);
}
inline ::UniqueId* UpstreamSegment::_internal_add_globaltraceids() {
  return globaltraceids_.Add();
}
inline ::UniqueId* UpstreamSegment::add_globaltraceids() {
  // @@protoc_insertion_point(field_add:UpstreamSegment.globalTraceIds)
  return _internal_add_globaltraceids();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::UniqueId >&
UpstreamSegment::globaltraceids() const {
  // @@protoc_insertion_point(field_list:UpstreamSegment.globalTraceIds)
  return globaltraceids_;
}

// bytes segment = 2;
inline void UpstreamSegment::clear_segment() {
  segment_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& UpstreamSegment::segment() const {
  // @@protoc_insertion_point(field_get:UpstreamSegment.segment)
  return _internal_segment();
}
inline void UpstreamSegment::set_segment(const std::string& value) {
  _internal_set_segment(value);
  // @@protoc_insertion_point(field_set:UpstreamSegment.segment)
}
inline std::string* UpstreamSegment::mutable_segment() {
  // @@protoc_insertion_point(field_mutable:UpstreamSegment.segment)
  return _internal_mutable_segment();
}
inline const std::string& UpstreamSegment::_internal_segment() const {
  return segment_.GetNoArena();
}
inline void UpstreamSegment::_internal_set_segment(const std::string& value) {
  
  segment_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void UpstreamSegment::set_segment(std::string&& value) {
  
  segment_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:UpstreamSegment.segment)
}
inline void UpstreamSegment::set_segment(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  segment_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:UpstreamSegment.segment)
}
inline void UpstreamSegment::set_segment(const void* value, size_t size) {
  
  segment_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:UpstreamSegment.segment)
}
inline std::string* UpstreamSegment::_internal_mutable_segment() {
  
  return segment_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* UpstreamSegment::release_segment() {
  // @@protoc_insertion_point(field_release:UpstreamSegment.segment)
  
  return segment_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void UpstreamSegment::set_allocated_segment(std::string* segment) {
  if (segment != nullptr) {
    
  } else {
    
  }
  segment_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), segment);
  // @@protoc_insertion_point(field_set_allocated:UpstreamSegment.segment)
}

// -------------------------------------------------------------------

// UniqueId

// repeated int64 idParts = 1;
inline int UniqueId::_internal_idparts_size() const {
  return idparts_.size();
}
inline int UniqueId::idparts_size() const {
  return _internal_idparts_size();
}
inline void UniqueId::clear_idparts() {
  idparts_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int64 UniqueId::_internal_idparts(int index) const {
  return idparts_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 UniqueId::idparts(int index) const {
  // @@protoc_insertion_point(field_get:UniqueId.idParts)
  return _internal_idparts(index);
}
inline void UniqueId::set_idparts(int index, ::PROTOBUF_NAMESPACE_ID::int64 value) {
  idparts_.Set(index, value);
  // @@protoc_insertion_point(field_set:UniqueId.idParts)
}
inline void UniqueId::_internal_add_idparts(::PROTOBUF_NAMESPACE_ID::int64 value) {
  idparts_.Add(value);
}
inline void UniqueId::add_idparts(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_add_idparts(value);
  // @@protoc_insertion_point(field_add:UniqueId.idParts)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
UniqueId::_internal_idparts() const {
  return idparts_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
UniqueId::idparts() const {
  // @@protoc_insertion_point(field_list:UniqueId.idParts)
  return _internal_idparts();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
UniqueId::_internal_mutable_idparts() {
  return &idparts_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
UniqueId::mutable_idparts() {
  // @@protoc_insertion_point(field_mutable_list:UniqueId.idParts)
  return _internal_mutable_idparts();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::SpanType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SpanType>() {
  return ::SpanType_descriptor();
}
template <> struct is_proto_enum< ::RefType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::RefType>() {
  return ::RefType_descriptor();
}
template <> struct is_proto_enum< ::SpanLayer> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SpanLayer>() {
  return ::SpanLayer_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_common_2ftrace_2dcommon_2eproto
