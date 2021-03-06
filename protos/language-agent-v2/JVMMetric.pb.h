// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: language-agent-v2/JVMMetric.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_language_2dagent_2dv2_2fJVMMetric_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_language_2dagent_2dv2_2fJVMMetric_2eproto

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
#include "common/common.pb.h"
#include "common/JVM.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_language_2dagent_2dv2_2fJVMMetric_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_language_2dagent_2dv2_2fJVMMetric_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_language_2dagent_2dv2_2fJVMMetric_2eproto;
class JVMMetricCollection;
class JVMMetricCollectionDefaultTypeInternal;
extern JVMMetricCollectionDefaultTypeInternal _JVMMetricCollection_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::JVMMetricCollection* Arena::CreateMaybeMessage<::JVMMetricCollection>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class JVMMetricCollection :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:JVMMetricCollection) */ {
 public:
  JVMMetricCollection();
  virtual ~JVMMetricCollection();

  JVMMetricCollection(const JVMMetricCollection& from);
  JVMMetricCollection(JVMMetricCollection&& from) noexcept
    : JVMMetricCollection() {
    *this = ::std::move(from);
  }

  inline JVMMetricCollection& operator=(const JVMMetricCollection& from) {
    CopyFrom(from);
    return *this;
  }
  inline JVMMetricCollection& operator=(JVMMetricCollection&& from) noexcept {
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
  static const JVMMetricCollection& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const JVMMetricCollection* internal_default_instance() {
    return reinterpret_cast<const JVMMetricCollection*>(
               &_JVMMetricCollection_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(JVMMetricCollection& a, JVMMetricCollection& b) {
    a.Swap(&b);
  }
  inline void Swap(JVMMetricCollection* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline JVMMetricCollection* New() const final {
    return CreateMaybeMessage<JVMMetricCollection>(nullptr);
  }

  JVMMetricCollection* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<JVMMetricCollection>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const JVMMetricCollection& from);
  void MergeFrom(const JVMMetricCollection& from);
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
  void InternalSwap(JVMMetricCollection* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "JVMMetricCollection";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_language_2dagent_2dv2_2fJVMMetric_2eproto);
    return ::descriptor_table_language_2dagent_2dv2_2fJVMMetric_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMetricsFieldNumber = 1,
    kServiceInstanceIdFieldNumber = 2,
  };
  // repeated .JVMMetric metrics = 1;
  int metrics_size() const;
  private:
  int _internal_metrics_size() const;
  public:
  void clear_metrics();
  ::JVMMetric* mutable_metrics(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::JVMMetric >*
      mutable_metrics();
  private:
  const ::JVMMetric& _internal_metrics(int index) const;
  ::JVMMetric* _internal_add_metrics();
  public:
  const ::JVMMetric& metrics(int index) const;
  ::JVMMetric* add_metrics();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::JVMMetric >&
      metrics() const;

  // int32 serviceInstanceId = 2;
  void clear_serviceinstanceid();
  ::PROTOBUF_NAMESPACE_ID::int32 serviceinstanceid() const;
  void set_serviceinstanceid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_serviceinstanceid() const;
  void _internal_set_serviceinstanceid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:JVMMetricCollection)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::JVMMetric > metrics_;
  ::PROTOBUF_NAMESPACE_ID::int32 serviceinstanceid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_language_2dagent_2dv2_2fJVMMetric_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// JVMMetricCollection

// repeated .JVMMetric metrics = 1;
inline int JVMMetricCollection::_internal_metrics_size() const {
  return metrics_.size();
}
inline int JVMMetricCollection::metrics_size() const {
  return _internal_metrics_size();
}
inline ::JVMMetric* JVMMetricCollection::mutable_metrics(int index) {
  // @@protoc_insertion_point(field_mutable:JVMMetricCollection.metrics)
  return metrics_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::JVMMetric >*
JVMMetricCollection::mutable_metrics() {
  // @@protoc_insertion_point(field_mutable_list:JVMMetricCollection.metrics)
  return &metrics_;
}
inline const ::JVMMetric& JVMMetricCollection::_internal_metrics(int index) const {
  return metrics_.Get(index);
}
inline const ::JVMMetric& JVMMetricCollection::metrics(int index) const {
  // @@protoc_insertion_point(field_get:JVMMetricCollection.metrics)
  return _internal_metrics(index);
}
inline ::JVMMetric* JVMMetricCollection::_internal_add_metrics() {
  return metrics_.Add();
}
inline ::JVMMetric* JVMMetricCollection::add_metrics() {
  // @@protoc_insertion_point(field_add:JVMMetricCollection.metrics)
  return _internal_add_metrics();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::JVMMetric >&
JVMMetricCollection::metrics() const {
  // @@protoc_insertion_point(field_list:JVMMetricCollection.metrics)
  return metrics_;
}

// int32 serviceInstanceId = 2;
inline void JVMMetricCollection::clear_serviceinstanceid() {
  serviceinstanceid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 JVMMetricCollection::_internal_serviceinstanceid() const {
  return serviceinstanceid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 JVMMetricCollection::serviceinstanceid() const {
  // @@protoc_insertion_point(field_get:JVMMetricCollection.serviceInstanceId)
  return _internal_serviceinstanceid();
}
inline void JVMMetricCollection::_internal_set_serviceinstanceid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  serviceinstanceid_ = value;
}
inline void JVMMetricCollection::set_serviceinstanceid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_serviceinstanceid(value);
  // @@protoc_insertion_point(field_set:JVMMetricCollection.serviceInstanceId)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_language_2dagent_2dv2_2fJVMMetric_2eproto
