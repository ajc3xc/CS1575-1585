program: funcs.o TrianglePrinter.o main.o
	g++ funcs.o TrianglePrinter.o main.o -o program

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

TrianglePrinter.o: funcs.h TrianglePrinter.h TrianglePrinter.cpp
	g++ -c TrianglePrinter.cpp

main.o: funcs.h TrianglePrinter.h main.cpp
	g++ -c main.cpp

.PHONY: clean

clean:
	-@rm -f program
	-@rm -f *.o