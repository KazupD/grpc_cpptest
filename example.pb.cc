// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: example.proto
// Protobuf C++ Version: 5.28.1

#include "example.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace example {

inline constexpr HelloRequest::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR HelloRequest::HelloRequest(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct HelloRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR HelloRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~HelloRequestDefaultTypeInternal() {}
  union {
    HelloRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 HelloRequestDefaultTypeInternal _HelloRequest_default_instance_;

inline constexpr HelloReply::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : message_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR HelloReply::HelloReply(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct HelloReplyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR HelloReplyDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~HelloReplyDefaultTypeInternal() {}
  union {
    HelloReply _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 HelloReplyDefaultTypeInternal _HelloReply_default_instance_;
}  // namespace example
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_example_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_example_2eproto = nullptr;
const ::uint32_t
    TableStruct_example_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::example::HelloRequest, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::example::HelloRequest, _impl_.name_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::example::HelloReply, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::example::HelloReply, _impl_.message_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::example::HelloRequest)},
        {9, -1, -1, sizeof(::example::HelloReply)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::example::_HelloRequest_default_instance_._instance,
    &::example::_HelloReply_default_instance_._instance,
};
const char descriptor_table_protodef_example_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\rexample.proto\022\007example\"\034\n\014HelloRequest"
    "\022\014\n\004name\030\001 \001(\t\"\035\n\nHelloReply\022\017\n\007message\030"
    "\001 \001(\t2H\n\016ExampleService\0226\n\010SayHello\022\025.ex"
    "ample.HelloRequest\032\023.example.HelloReplyb"
    "\006proto3"
};
static ::absl::once_flag descriptor_table_example_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_example_2eproto = {
    false,
    false,
    167,
    descriptor_table_protodef_example_2eproto,
    "example.proto",
    &descriptor_table_example_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_example_2eproto::offsets,
    file_level_enum_descriptors_example_2eproto,
    file_level_service_descriptors_example_2eproto,
};
namespace example {
// ===================================================================

class HelloRequest::_Internal {
 public:
};

HelloRequest::HelloRequest(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:example.HelloRequest)
}
inline PROTOBUF_NDEBUG_INLINE HelloRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::example::HelloRequest& from_msg)
      : name_(arena, from.name_),
        _cached_size_{0} {}

HelloRequest::HelloRequest(
    ::google::protobuf::Arena* arena,
    const HelloRequest& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  HelloRequest* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:example.HelloRequest)
}
inline PROTOBUF_NDEBUG_INLINE HelloRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : name_(arena),
        _cached_size_{0} {}

inline void HelloRequest::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
HelloRequest::~HelloRequest() {
  // @@protoc_insertion_point(destructor:example.HelloRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void HelloRequest::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.name_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataFull
    HelloRequest::_class_data_ = {
        ::google::protobuf::Message::ClassData{
            &_HelloRequest_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            nullptr,  // IsInitialized
            &HelloRequest::MergeImpl,
#if defined(PROTOBUF_CUSTOM_VTABLE)
            ::google::protobuf::Message::GetDeleteImpl<HelloRequest>(),
            ::google::protobuf::Message::GetNewImpl<HelloRequest>(),
            ::google::protobuf::Message::GetClearImpl<HelloRequest>(), &HelloRequest::ByteSizeLong,
                &HelloRequest::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(HelloRequest, _impl_._cached_size_),
            false,
        },
        &HelloRequest::kDescriptorMethods,
        &descriptor_table_example_2eproto,
        nullptr,  // tracker
};
const ::google::protobuf::MessageLite::ClassData* HelloRequest::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 33, 2> HelloRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::example::HelloRequest>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string name = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(HelloRequest, _impl_.name_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string name = 1;
    {PROTOBUF_FIELD_OFFSET(HelloRequest, _impl_.name_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\24\4\0\0\0\0\0\0"
    "example.HelloRequest"
    "name"
  }},
};

PROTOBUF_NOINLINE void HelloRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:example.HelloRequest)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* HelloRequest::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const HelloRequest& this_ = static_cast<const HelloRequest&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* HelloRequest::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const HelloRequest& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:example.HelloRequest)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // string name = 1;
          if (!this_._internal_name().empty()) {
            const std::string& _s = this_._internal_name();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "example.HelloRequest.name");
            target = stream->WriteStringMaybeAliased(1, _s, target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:example.HelloRequest)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t HelloRequest::ByteSizeLong(const MessageLite& base) {
          const HelloRequest& this_ = static_cast<const HelloRequest&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t HelloRequest::ByteSizeLong() const {
          const HelloRequest& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:example.HelloRequest)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

           {
            // string name = 1;
            if (!this_._internal_name().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_name());
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void HelloRequest::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<HelloRequest*>(&to_msg);
  auto& from = static_cast<const HelloRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:example.HelloRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void HelloRequest::CopyFrom(const HelloRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:example.HelloRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void HelloRequest::InternalSwap(HelloRequest* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_, &other->_impl_.name_, arena);
}

::google::protobuf::Metadata HelloRequest::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class HelloReply::_Internal {
 public:
};

HelloReply::HelloReply(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:example.HelloReply)
}
inline PROTOBUF_NDEBUG_INLINE HelloReply::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::example::HelloReply& from_msg)
      : message_(arena, from.message_),
        _cached_size_{0} {}

HelloReply::HelloReply(
    ::google::protobuf::Arena* arena,
    const HelloReply& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  HelloReply* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:example.HelloReply)
}
inline PROTOBUF_NDEBUG_INLINE HelloReply::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : message_(arena),
        _cached_size_{0} {}

inline void HelloReply::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
HelloReply::~HelloReply() {
  // @@protoc_insertion_point(destructor:example.HelloReply)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void HelloReply::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.message_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataFull
    HelloReply::_class_data_ = {
        ::google::protobuf::Message::ClassData{
            &_HelloReply_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            nullptr,  // IsInitialized
            &HelloReply::MergeImpl,
#if defined(PROTOBUF_CUSTOM_VTABLE)
            ::google::protobuf::Message::GetDeleteImpl<HelloReply>(),
            ::google::protobuf::Message::GetNewImpl<HelloReply>(),
            ::google::protobuf::Message::GetClearImpl<HelloReply>(), &HelloReply::ByteSizeLong,
                &HelloReply::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(HelloReply, _impl_._cached_size_),
            false,
        },
        &HelloReply::kDescriptorMethods,
        &descriptor_table_example_2eproto,
        nullptr,  // tracker
};
const ::google::protobuf::MessageLite::ClassData* HelloReply::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 34, 2> HelloReply::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::example::HelloReply>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string message = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(HelloReply, _impl_.message_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string message = 1;
    {PROTOBUF_FIELD_OFFSET(HelloReply, _impl_.message_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\22\7\0\0\0\0\0\0"
    "example.HelloReply"
    "message"
  }},
};

PROTOBUF_NOINLINE void HelloReply::Clear() {
// @@protoc_insertion_point(message_clear_start:example.HelloReply)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.message_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* HelloReply::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const HelloReply& this_ = static_cast<const HelloReply&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* HelloReply::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const HelloReply& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:example.HelloReply)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // string message = 1;
          if (!this_._internal_message().empty()) {
            const std::string& _s = this_._internal_message();
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "example.HelloReply.message");
            target = stream->WriteStringMaybeAliased(1, _s, target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:example.HelloReply)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t HelloReply::ByteSizeLong(const MessageLite& base) {
          const HelloReply& this_ = static_cast<const HelloReply&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t HelloReply::ByteSizeLong() const {
          const HelloReply& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:example.HelloReply)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

           {
            // string message = 1;
            if (!this_._internal_message().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                              this_._internal_message());
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void HelloReply::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<HelloReply*>(&to_msg);
  auto& from = static_cast<const HelloReply&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:example.HelloReply)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_message().empty()) {
    _this->_internal_set_message(from._internal_message());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void HelloReply::CopyFrom(const HelloReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:example.HelloReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void HelloReply::InternalSwap(HelloReply* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.message_, &other->_impl_.message_, arena);
}

::google::protobuf::Metadata HelloReply::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace example
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_example_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
