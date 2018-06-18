all: vector

vector: main.o vector.o
	g++ main.o vector.o vector
	
main.o: main.cpp
	g++ main.cpp -c

vector.o: vector.cpp
	g++ vector.cpp -c

clean: 
	rm -rf *.o vector
