#my coment

calc: main.o
	g++ -o calc main.o
	
main.o: main.cpp	
	g++ -c main.cpp
	
clean:rm -f *.o calc
	
