.PHONY: clean

clean:
	-@rm -f wordMap
	-@rm -f *.o
	-@rm -f *.aux
	-@rm -f *.log
	-@rm -f *.dvi

program:
	g++ wordMap.cpp -o wordMap
	./wordMap
	make clean

document:
	pdflatex document.tex
