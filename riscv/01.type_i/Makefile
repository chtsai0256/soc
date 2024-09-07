DIRS =  $(wildcard */)

.PHONY : clean
clean: 
	for var in $(DIRS); do \
		make clean -C $$var; \
	done


