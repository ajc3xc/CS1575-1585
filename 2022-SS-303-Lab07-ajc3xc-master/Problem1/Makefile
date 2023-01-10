problem1:
	g++ -Wall -g prob1.cpp -o problem1
	./problem1
	valgrind --leak-check=full --track-origins=yes ./problem1
	make clean

.PHONY: clean
clean:
	-@rm -f problem*
	-@rm -f *.o
