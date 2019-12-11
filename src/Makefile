CXX = g++ -std=c++11 -I/home/lyy/grpc/include
ver=release
#ver=debug

ifeq ($(ver),debug)
	CXXFLAGS += `pkg-config --cflags protobuf grpc` -Wall -Wextra -g -O0 -DDEBUG
else
	CXXFLAGS += `pkg-config --cflags protobuf grpc` -Wall
endif

LDFLAGS += -L/home/lyy/grpc/libs/opt -L/usr/local/lib `pkg-config --libs protobuf grpc++ grpc`\
			-Wl,--no-as-needed -lgrpc++_reflection -Wl,--as-needed -ldl

CXX += -I./ -I../gens/include
PROTO_SRC_DIR=$(shell find ../gens/src -type d)
PROTO_OBJS=$(foreach DIR,$(PROTO_SRC_DIR), $(wildcard $(DIR)/*.o))
CLIENT_SRCS=$(wildcard ./*.cpp)
CLIENT_OBJS=$(patsubst %.cpp,%.o, $(CLIENT_SRCS))
BIN=sky-client

#all: $(PROTO_OBJS) $(CLIENT_OBJS)
#	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(BIN) $^  -pthread -lprotobuf -lgrpc++ -luuid

all: $(PROTO_OBJS) $(CLIENT_OBJS)

$(CLIENT_OBJS):$(CLIENT_SRCS)
	$(CXX) $(CXXFLAGS) -o $@ -c $(patsubst %.o,%.cpp, $@)
clean:
	rm -f ./*.o $(BIN)
