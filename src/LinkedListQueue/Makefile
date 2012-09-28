CC = g++
FLAGS = -Wextra -Wall -pedantic

Node: Node.h Node.cpp
	$(CC) $(FLAGS) -c Node.cpp

Queue: Queue.h Queue.cpp
	$(CC) $(FLAGS) -c Queue.cpp

queue_tester: Queue.o queue_tester.cpp Node.o
	$(CC) $(FLAGS) -o queue_test.o queue_tester.cpp Node.o

