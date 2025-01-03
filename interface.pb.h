// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: interface.proto
// Protobuf C++ Version: 5.28.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_interface_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_interface_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5028001
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_interface_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_interface_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_interface_2eproto;
namespace PoseService {
class CoordinatesRequest;
struct CoordinatesRequestDefaultTypeInternal;
extern CoordinatesRequestDefaultTypeInternal _CoordinatesRequest_default_instance_;
class CoordinatesResponse;
struct CoordinatesResponseDefaultTypeInternal;
extern CoordinatesResponseDefaultTypeInternal _CoordinatesResponse_default_instance_;
}  // namespace PoseService
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace PoseService {

// ===================================================================


// -------------------------------------------------------------------

class CoordinatesResponse final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:PoseService.CoordinatesResponse) */ {
 public:
  inline CoordinatesResponse() : CoordinatesResponse(nullptr) {}
  ~CoordinatesResponse() PROTOBUF_FINAL;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR CoordinatesResponse(
      ::google::protobuf::internal::ConstantInitialized);

  inline CoordinatesResponse(const CoordinatesResponse& from) : CoordinatesResponse(nullptr, from) {}
  inline CoordinatesResponse(CoordinatesResponse&& from) noexcept
      : CoordinatesResponse(nullptr, std::move(from)) {}
  inline CoordinatesResponse& operator=(const CoordinatesResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline CoordinatesResponse& operator=(CoordinatesResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CoordinatesResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const CoordinatesResponse* internal_default_instance() {
    return reinterpret_cast<const CoordinatesResponse*>(
        &_CoordinatesResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(CoordinatesResponse& a, CoordinatesResponse& b) { a.Swap(&b); }
  inline void Swap(CoordinatesResponse* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CoordinatesResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CoordinatesResponse* New(::google::protobuf::Arena* arena = nullptr) const PROTOBUF_FINAL {
    return ::google::protobuf::Message::DefaultConstruct<CoordinatesResponse>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const CoordinatesResponse& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const CoordinatesResponse& from) { CoordinatesResponse::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(CoordinatesResponse* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "PoseService.CoordinatesResponse"; }

 protected:
  explicit CoordinatesResponse(::google::protobuf::Arena* arena);
  CoordinatesResponse(::google::protobuf::Arena* arena, const CoordinatesResponse& from);
  CoordinatesResponse(::google::protobuf::Arena* arena, CoordinatesResponse&& from) noexcept
      : CoordinatesResponse(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const PROTOBUF_FINAL;
  static const ::google::protobuf::Message::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kMessageFieldNumber = 1,
  };
  // string message = 1;
  void clear_message() ;
  const std::string& message() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_message(Arg_&& arg, Args_... args);
  std::string* mutable_message();
  PROTOBUF_NODISCARD std::string* release_message();
  void set_allocated_message(std::string* value);

  private:
  const std::string& _internal_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_message(
      const std::string& value);
  std::string* _internal_mutable_message();

  public:
  // @@protoc_insertion_point(class_scope:PoseService.CoordinatesResponse)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      47, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_CoordinatesResponse_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const CoordinatesResponse& from_msg);
    ::google::protobuf::internal::ArenaStringPtr message_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_interface_2eproto;
};
// -------------------------------------------------------------------

class CoordinatesRequest final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:PoseService.CoordinatesRequest) */ {
 public:
  inline CoordinatesRequest() : CoordinatesRequest(nullptr) {}
  ~CoordinatesRequest() PROTOBUF_FINAL;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR CoordinatesRequest(
      ::google::protobuf::internal::ConstantInitialized);

  inline CoordinatesRequest(const CoordinatesRequest& from) : CoordinatesRequest(nullptr, from) {}
  inline CoordinatesRequest(CoordinatesRequest&& from) noexcept
      : CoordinatesRequest(nullptr, std::move(from)) {}
  inline CoordinatesRequest& operator=(const CoordinatesRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline CoordinatesRequest& operator=(CoordinatesRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CoordinatesRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const CoordinatesRequest* internal_default_instance() {
    return reinterpret_cast<const CoordinatesRequest*>(
        &_CoordinatesRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(CoordinatesRequest& a, CoordinatesRequest& b) { a.Swap(&b); }
  inline void Swap(CoordinatesRequest* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CoordinatesRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CoordinatesRequest* New(::google::protobuf::Arena* arena = nullptr) const PROTOBUF_FINAL {
    return ::google::protobuf::Message::DefaultConstruct<CoordinatesRequest>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const CoordinatesRequest& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const CoordinatesRequest& from) { CoordinatesRequest::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(CoordinatesRequest* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "PoseService.CoordinatesRequest"; }

 protected:
  explicit CoordinatesRequest(::google::protobuf::Arena* arena);
  CoordinatesRequest(::google::protobuf::Arena* arena, const CoordinatesRequest& from);
  CoordinatesRequest(::google::protobuf::Arena* arena, CoordinatesRequest&& from) noexcept
      : CoordinatesRequest(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const PROTOBUF_FINAL;
  static const ::google::protobuf::Message::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kPositionXFieldNumber = 1,
    kPositionYFieldNumber = 2,
    kPositionZFieldNumber = 3,
    kOrientationRollFieldNumber = 4,
    kOrientationPitchFieldNumber = 5,
    kOrientationYawFieldNumber = 6,
  };
  // float position_x = 1;
  void clear_position_x() ;
  float position_x() const;
  void set_position_x(float value);

  private:
  float _internal_position_x() const;
  void _internal_set_position_x(float value);

  public:
  // float position_y = 2;
  void clear_position_y() ;
  float position_y() const;
  void set_position_y(float value);

  private:
  float _internal_position_y() const;
  void _internal_set_position_y(float value);

  public:
  // float position_z = 3;
  void clear_position_z() ;
  float position_z() const;
  void set_position_z(float value);

  private:
  float _internal_position_z() const;
  void _internal_set_position_z(float value);

  public:
  // float orientation_roll = 4;
  void clear_orientation_roll() ;
  float orientation_roll() const;
  void set_orientation_roll(float value);

  private:
  float _internal_orientation_roll() const;
  void _internal_set_orientation_roll(float value);

  public:
  // float orientation_pitch = 5;
  void clear_orientation_pitch() ;
  float orientation_pitch() const;
  void set_orientation_pitch(float value);

  private:
  float _internal_orientation_pitch() const;
  void _internal_set_orientation_pitch(float value);

  public:
  // float orientation_yaw = 6;
  void clear_orientation_yaw() ;
  float orientation_yaw() const;
  void set_orientation_yaw(float value);

  private:
  float _internal_orientation_yaw() const;
  void _internal_set_orientation_yaw(float value);

  public:
  // @@protoc_insertion_point(class_scope:PoseService.CoordinatesRequest)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 6, 0,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_CoordinatesRequest_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const CoordinatesRequest& from_msg);
    float position_x_;
    float position_y_;
    float position_z_;
    float orientation_roll_;
    float orientation_pitch_;
    float orientation_yaw_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_interface_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// CoordinatesRequest

// float position_x = 1;
inline void CoordinatesRequest::clear_position_x() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.position_x_ = 0;
}
inline float CoordinatesRequest::position_x() const {
  // @@protoc_insertion_point(field_get:PoseService.CoordinatesRequest.position_x)
  return _internal_position_x();
}
inline void CoordinatesRequest::set_position_x(float value) {
  _internal_set_position_x(value);
  // @@protoc_insertion_point(field_set:PoseService.CoordinatesRequest.position_x)
}
inline float CoordinatesRequest::_internal_position_x() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.position_x_;
}
inline void CoordinatesRequest::_internal_set_position_x(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.position_x_ = value;
}

// float position_y = 2;
inline void CoordinatesRequest::clear_position_y() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.position_y_ = 0;
}
inline float CoordinatesRequest::position_y() const {
  // @@protoc_insertion_point(field_get:PoseService.CoordinatesRequest.position_y)
  return _internal_position_y();
}
inline void CoordinatesRequest::set_position_y(float value) {
  _internal_set_position_y(value);
  // @@protoc_insertion_point(field_set:PoseService.CoordinatesRequest.position_y)
}
inline float CoordinatesRequest::_internal_position_y() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.position_y_;
}
inline void CoordinatesRequest::_internal_set_position_y(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.position_y_ = value;
}

// float position_z = 3;
inline void CoordinatesRequest::clear_position_z() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.position_z_ = 0;
}
inline float CoordinatesRequest::position_z() const {
  // @@protoc_insertion_point(field_get:PoseService.CoordinatesRequest.position_z)
  return _internal_position_z();
}
inline void CoordinatesRequest::set_position_z(float value) {
  _internal_set_position_z(value);
  // @@protoc_insertion_point(field_set:PoseService.CoordinatesRequest.position_z)
}
inline float CoordinatesRequest::_internal_position_z() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.position_z_;
}
inline void CoordinatesRequest::_internal_set_position_z(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.position_z_ = value;
}

// float orientation_roll = 4;
inline void CoordinatesRequest::clear_orientation_roll() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.orientation_roll_ = 0;
}
inline float CoordinatesRequest::orientation_roll() const {
  // @@protoc_insertion_point(field_get:PoseService.CoordinatesRequest.orientation_roll)
  return _internal_orientation_roll();
}
inline void CoordinatesRequest::set_orientation_roll(float value) {
  _internal_set_orientation_roll(value);
  // @@protoc_insertion_point(field_set:PoseService.CoordinatesRequest.orientation_roll)
}
inline float CoordinatesRequest::_internal_orientation_roll() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.orientation_roll_;
}
inline void CoordinatesRequest::_internal_set_orientation_roll(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.orientation_roll_ = value;
}

// float orientation_pitch = 5;
inline void CoordinatesRequest::clear_orientation_pitch() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.orientation_pitch_ = 0;
}
inline float CoordinatesRequest::orientation_pitch() const {
  // @@protoc_insertion_point(field_get:PoseService.CoordinatesRequest.orientation_pitch)
  return _internal_orientation_pitch();
}
inline void CoordinatesRequest::set_orientation_pitch(float value) {
  _internal_set_orientation_pitch(value);
  // @@protoc_insertion_point(field_set:PoseService.CoordinatesRequest.orientation_pitch)
}
inline float CoordinatesRequest::_internal_orientation_pitch() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.orientation_pitch_;
}
inline void CoordinatesRequest::_internal_set_orientation_pitch(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.orientation_pitch_ = value;
}

// float orientation_yaw = 6;
inline void CoordinatesRequest::clear_orientation_yaw() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.orientation_yaw_ = 0;
}
inline float CoordinatesRequest::orientation_yaw() const {
  // @@protoc_insertion_point(field_get:PoseService.CoordinatesRequest.orientation_yaw)
  return _internal_orientation_yaw();
}
inline void CoordinatesRequest::set_orientation_yaw(float value) {
  _internal_set_orientation_yaw(value);
  // @@protoc_insertion_point(field_set:PoseService.CoordinatesRequest.orientation_yaw)
}
inline float CoordinatesRequest::_internal_orientation_yaw() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.orientation_yaw_;
}
inline void CoordinatesRequest::_internal_set_orientation_yaw(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.orientation_yaw_ = value;
}

// -------------------------------------------------------------------

// CoordinatesResponse

// string message = 1;
inline void CoordinatesResponse::clear_message() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.message_.ClearToEmpty();
}
inline const std::string& CoordinatesResponse::message() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:PoseService.CoordinatesResponse.message)
  return _internal_message();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void CoordinatesResponse::set_message(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.message_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:PoseService.CoordinatesResponse.message)
}
inline std::string* CoordinatesResponse::mutable_message() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:PoseService.CoordinatesResponse.message)
  return _s;
}
inline const std::string& CoordinatesResponse::_internal_message() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.message_.Get();
}
inline void CoordinatesResponse::_internal_set_message(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.message_.Set(value, GetArena());
}
inline std::string* CoordinatesResponse::_internal_mutable_message() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.message_.Mutable( GetArena());
}
inline std::string* CoordinatesResponse::release_message() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:PoseService.CoordinatesResponse.message)
  return _impl_.message_.Release();
}
inline void CoordinatesResponse::set_allocated_message(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.message_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.message_.IsDefault()) {
          _impl_.message_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:PoseService.CoordinatesResponse.message)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace PoseService


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_interface_2eproto_2epb_2eh
