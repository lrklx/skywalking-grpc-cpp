INCLUDE_DIR=./protos ./gens ./src ./demo

all:MAKE-C

MAKE-C:
	$(foreach DIR,$(INCLUDE_DIR), make -C $(DIR);)

clean:
	$(foreach DIR,$(INCLUDE_DIR), make -C $(DIR) clean;)
