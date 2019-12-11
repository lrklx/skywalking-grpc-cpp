CXX = g++ -I/home/lyy/grpc/include
ver=release

ifeq ($(ver),debug)
	CXXFLAGS += `pkg-config --cflags protobuf grpc` -std=c++11 -Wall -Wextra -g -O0 -DDEBUG
else
	CXXFLAGS += `pkg-config --cflags protobuf grpc` -std=c++11 -Wall
endif

LDFLAGS += -L/home/lyy/grpc/libs/opt -L/usr/local/lib `pkg-config --libs protobuf grpc++ grpc`\
		   CXX = g++ -I/home/lyy/grpc/include



CXX += -I./include
PROTO_SRC_DIR=$(shell find ./src -type d)
PROTO_SRCS=$(foreach DIR,$(PROTO_SRC_DIR), $(wildcard $(DIR)/*.cc))
PROTO_OBJS= $(patsubst %.cc,%.o, $(PROTO_SRCS))

#all: $(PROTOOBJS) $(OBJS)
#   $(CXX) $(CPPFLAGS) -o $(BIN) $^  -pthread -lprotobuf -lgrpc++

all: $(PROTO_OBJS)
	
$(PROTO_OBJS):$(PROTO_SRCS)
	$(CXX) $(CXXFLAGS) -o $@ -c $(patsubst %.o,%.cc, $@)
clean:
	rm -f ./src/*/*.o
