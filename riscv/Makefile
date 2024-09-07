DIRS =  $(wildcard */)


.PHONY : all
all:
	echo "only suppose make clean"


.PHONY : clean
clean: 
	@for var in $(DIRS); do \
		make clean -C $$var; \
	done


