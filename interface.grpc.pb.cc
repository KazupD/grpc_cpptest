// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: interface.proto

#include "interface.pb.h"
#include "interface.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace PoseService {

static const char* PoseService_method_names[] = {
  "/PoseService.PoseService/SendCoordinates",
};

std::unique_ptr< PoseService::Stub> PoseService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< PoseService::Stub> stub(new PoseService::Stub(channel, options));
  return stub;
}

PoseService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_SendCoordinates_(PoseService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status PoseService::Stub::SendCoordinates(::grpc::ClientContext* context, const ::PoseService::CoordinatesRequest& request, ::PoseService::CoordinatesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::PoseService::CoordinatesRequest, ::PoseService::CoordinatesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SendCoordinates_, context, request, response);
}

void PoseService::Stub::async::SendCoordinates(::grpc::ClientContext* context, const ::PoseService::CoordinatesRequest* request, ::PoseService::CoordinatesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::PoseService::CoordinatesRequest, ::PoseService::CoordinatesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendCoordinates_, context, request, response, std::move(f));
}

void PoseService::Stub::async::SendCoordinates(::grpc::ClientContext* context, const ::PoseService::CoordinatesRequest* request, ::PoseService::CoordinatesResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendCoordinates_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::PoseService::CoordinatesResponse>* PoseService::Stub::PrepareAsyncSendCoordinatesRaw(::grpc::ClientContext* context, const ::PoseService::CoordinatesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::PoseService::CoordinatesResponse, ::PoseService::CoordinatesRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SendCoordinates_, context, request);
}

::grpc::ClientAsyncResponseReader< ::PoseService::CoordinatesResponse>* PoseService::Stub::AsyncSendCoordinatesRaw(::grpc::ClientContext* context, const ::PoseService::CoordinatesRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSendCoordinatesRaw(context, request, cq);
  result->StartCall();
  return result;
}

PoseService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      PoseService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< PoseService::Service, ::PoseService::CoordinatesRequest, ::PoseService::CoordinatesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](PoseService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::PoseService::CoordinatesRequest* req,
             ::PoseService::CoordinatesResponse* resp) {
               return service->SendCoordinates(ctx, req, resp);
             }, this)));
}

PoseService::Service::~Service() {
}

::grpc::Status PoseService::Service::SendCoordinates(::grpc::ServerContext* context, const ::PoseService::CoordinatesRequest* request, ::PoseService::CoordinatesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace PoseService
