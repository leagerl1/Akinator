all: Driver.o Akinator.o
	g++ -std=c++11 -o akinator Driver.o Akinator.o
Driver.o: Driver.cpp
	g++ -std=c++11 -c Driver.cpp
Akinator.o: Akinator.cpp
	g++ -std=c++11 -c Akinator.cpp
clean:
	rm -rf *o akinator

-end-