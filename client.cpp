#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>
#include "interface.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

class PoseClient {
public:
    PoseClient(std::shared_ptr<Channel> channel)
        : stub_(PoseService::PoseService::NewStub(channel)) {}

    std::string SendCoordinates(float pos_x, float pos_y, float pos_z,
                                 float roll, float pitch, float yaw) {
        // Prepare the request
        PoseService::CoordinatesRequest request;
        request.set_position_x(pos_x);
        request.set_position_y(pos_y);
        request.set_position_z(pos_z);
        request.set_orientation_roll(roll);
        request.set_orientation_pitch(pitch);
        request.set_orientation_yaw(yaw);

        // Prepare the response
        PoseService::CoordinatesResponse response;
        ClientContext context;

        // Make the RPC call
        Status status = stub_->SendCoordinates(&context, request, &response);

        if (status.ok()) {
            return response.message();
        } else {
            std::cerr << "RPC failed: " << status.error_message() << std::endl;
            return "RPC failed.";
        }
    }

private:
    std::unique_ptr<PoseService::PoseService::Stub> stub_;
};

int main() {
    // Connect to the server
    PoseClient client(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));

    // Send random coordinates and print the response
    float random_pos_x = 1.23f;
    float random_pos_y = 4.56f;
    float random_pos_z = 7.89f;
    float random_roll = 0.12f;
    float random_pitch = 3.45f;
    float random_yaw = 6.78f;

    std::string response = client.SendCoordinates(random_pos_x, random_pos_y, random_pos_z,
                                                   random_roll, random_pitch, random_yaw);
    std::cout << "Client received: " << response << std::endl;

    return 0;
}
