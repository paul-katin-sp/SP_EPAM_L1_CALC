#my coment

calc: main.o calc_proc_oop.o
	g++ -o calc main.o calc_proc_oop.o
	
main.o: main.cpp	
	g++ -c main.cpp

calc_proc_oop.o: calc_proc_oop.cpp
	g++ -c calc_proc_oop.cpp
	
clean:rm -f *.o calc
	
