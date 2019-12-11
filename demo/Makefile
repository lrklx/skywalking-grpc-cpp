CXX = g++ -std=c++11 -I/home/lyy/grpc/include
ver=release

CXXFLAGS += `pkg-config --cflags protobuf grpc` -Wall

LDFLAGS += -L/home/lyy/grpc/libs/opt -L/usr/local/lib `pkg-config --libs protobuf grpc++ grpc`\
			-Wl,--no-as-needed -lgrpc++_reflection -Wl,--as-needed -ldl

CXX += -I./ -I../gens/include -I../src/
SKY_PROTO_SRC_DIR=$(shell find ../gens/src -type d)
SKY_PROTO_OBJS=$(foreach DIR,$(SKY_PROTO_SRC_DIR), $(wildcard $(DIR)/*.o))

SKY_OBJS=$(wildcard ../src/*.o)

PROTO_SRCS=$(wildcard ./*.cc)
PROTO_OBJS= $(patsubst %.cc,%.o, $(PROTO_SRCS))

CLIENT_SRCS=$(wildcard ./*.cpp)
CLIENT_OBJS=$(patsubst %.cpp,%.o, $(CLIENT_SRCS))
BIN=demo-test

all: $(SKY_PROTO_OBJS) $(PROTO_OBJS) $(SKY_OBJS) $(CLIENT_OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(BIN) $^  -pthread -lprotobuf -lgrpc++ -luuid

$(CLIENT_OBJS):$(CLIENT_SRCS)
	$(CXX) $(CXXFLAGS) -o $@ -c $(patsubst %.o,%.cpp, $@)

$(PROTO_OBJS):$(PROTO_SRCS)
	$(CXX) $(CXXFLAGS) -o $@ -c $(patsubst %.o,%.cc, $@)

clean:
	rm -f ./*.o $(BIN)
