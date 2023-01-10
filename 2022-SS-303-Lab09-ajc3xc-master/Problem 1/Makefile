.PHONY: clean

clean:
	-@rm -f prob2
	-@rm -f callgrind*

programCallgrind:
	g++ -g -o prob2 prob2.cpp
	valgrind --tool=callgrind ./prob2
	kcachegrind callgrind.out.*
	make clean
