"C:\Users\danie\grpc\cmake\build\third_party\protobuf\Release\protoc.exe" --cpp_out=. --grpc_out=. --proto_path=proto --plugin=protoc-gen-grpc="C:\Users\danie\grpc\cmake\build\Release\grpc_cpp_plugin.exe" proto\example.proto

mkdir build
cd build

"C:\Program Files\CMake\bin\cmake.exe" ..

"C:\Program Files\CMake\bin\cmake.exe" --build . --config Release