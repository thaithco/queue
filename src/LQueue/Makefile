CC = g++
FLAGS = -Wextra -Wall -pedantic

main: Queue.o queue_tester.cpp
	$(CC) $(FLAGS) -o queue_tester queue_tester.cpp Queue.o

Queue.o: Queue.h Queue.cpp
	$(CC) $(FLAGS) -c Queue.cpp
