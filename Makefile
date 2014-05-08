CC=g++
OP=-std=c++11 -Wall
LIB=-lncurses -lm
EXE=onyx

all: main.o
	$(CC) $(OP) $(LIB) *.o -o ${EXE}

main.o: win.o pointer.o buffer.o line.o
	$(CC) $(OP) $(LIB) -c onyx.cpp

win.o: win.cpp
	$(CC) $(OP) $(LIB) -c win.cpp

pointer.o: pointer.cpp
	$(CC) $(OP) $(LIB) -c pointer.cpp

buffer.o: buffer.cpp
	$(CC) $(OP) $(LIB) -c buffer.cpp

line.o: line.cpp
	$(CC) $(OP) $(LIB) -c line.cpp


clean:
	rm -f $(EXE)
	rm -f *.o

.PHONY:  clean