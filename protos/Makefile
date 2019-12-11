PROTO_GENS=../gens
all: create_dir proto2cpp

create_dir:
	@mkdir -p $(PROTO_GENS)
proto2cpp:
	@./create_src.sh	
clean:
	@rm -fr $(PROTO_GENS)/src/*;
	@rm -fr $(PROTO_GENS)/include/*;
	@find ./ -name *.h|xargs -i rm -f {};
	@find ./ -name *.cc|xargs -i rm -f {};
