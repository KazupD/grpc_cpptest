#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>
#include "interface.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

// Use fully qualified names to avoid ambiguity
class PoseServiceImpl final : public PoseService::PoseService::Service {
public:
    Status SendCoordinates(ServerContext* context, const PoseService::CoordinatesRequest* request, PoseService::CoordinatesResponse* response) override {
        // Extract coordinates from the request
        float position_x = request->position_x();
        float position_y = request->position_y();
        float position_z = request->position_z();
        float orientation_roll = request->orientation_roll();
        float orientation_pitch = request->orientation_pitch();
        float orientation_yaw = request->orientation_yaw();

        // Generate a response message
        std::string response_message = "Received coordinates: Position("
                                        + std::to_string(position_x) + ", "
                                        + std::to_string(position_y) + ", "
                                        + std::to_string(position_z) + ") Orientation("
                                        + std::to_string(orientation_roll) + ", "
                                        + std::to_string(orientation_pitch) + ", "
                                        + std::to_string(orientation_yaw) + ")";
        response->set_message(response_message);

        std::cout << "Server processed coordinates: " << response_message << std::endl;

        return Status::OK;
    }
};

void RunServer() {
    std::string server_address("0.0.0.0:50051");
    PoseServiceImpl service;

    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;
    server->Wait();
}

int main() {
    RunServer();
    return 0;
}
