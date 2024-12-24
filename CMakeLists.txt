cmake_minimum_required(VERSION 3.13)
project(grpc_cpptest)

# Set paths to gRPC and Protocol Buffers
set(GRPC_INSTALL_DIR "C:/Users/danie/cmake")
set(CMAKE_PREFIX_PATH "${GRPC_INSTALL_DIR}")

include_directories("${GRPC_INSTALL_DIR}/include")
link_directories("${GRPC_INSTALL_DIR}/lib")

find_package(Protobuf CONFIG REQUIRED)
find_package(gRPC CONFIG REQUIRED)

set(PROTO_SRCS example.pb.cc example.grpc.pb.cc)
set(PROTO_HDRS example.pb.h example.grpc.pb.h)

# Server target
add_executable(grpc_server server.cpp ${PROTO_SRCS})
target_link_libraries(grpc_server gRPC::grpc++ protobuf::libprotobuf)

# Client target
add_executable(grpc_client client.cpp ${PROTO_SRCS})
target_link_libraries(grpc_client gRPC::grpc++ protobuf::libprotobuf)
