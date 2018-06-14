#makefile

__start__: a.out
	./a.out

a.out: main.o product.o store.o
	g++ main.o product.o store.o

main.o: main.cpp product.h store.h
	g++ -c -Wall main.cpp

store.o: store.h product.h store.cpp
	g++ -c -Wall store.cpp

product.o: product.h product.cpp
	g++ -c -Wall product.cpp

clean: 
	rm main.o product.o store.o a.out
