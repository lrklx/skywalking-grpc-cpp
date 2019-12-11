#!/bin/sh
find ./ -name *.h|xargs -i rm -f {}
find ./ -name *.cc|xargs -i rm -f {}
protoc -I=. --cpp_out=.  ./Demo.proto
protoc -I=.  --grpc_out=. --plugin=protoc-gen-grpc=/home/lyy/grpc/bins/opt/grpc_cpp_plugin ./Demo.proto
