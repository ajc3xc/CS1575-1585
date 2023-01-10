.PHONY: clean debug
clean:
	-@rm -f problem2
	-@rm -f debug
	-@rm -f *.o

debug:
	g++ -g -fsanitize=address -fno-omit-frame-pointer prob2.cpp -o problem2
	export ASAN_SYMBOLIZER_PATH=`which llvm-symbolizer`
	export ASAN_OPTIONS=symbolize=1
	./problem2
	make clean
problem2:
	g++ -g prob2.cpp -o problem2
	./problem2
	make clean
