problem1:
	g++ -Wall -g -fsanitize=address -fno-omit-frame-pointer Problem1/prob1.cpp -o problem1
	export ASAN_SYMBOLIZER_PATH=`which llvm-symbolizer`
	export ASAN_OPTIONS=symbolize=1

.PHONY: clean
clean:
	-@rm problem*
