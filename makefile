


all: main.o
	./main.o
	rm *.o


main.o: 
	gcc main.cpp -o main.o