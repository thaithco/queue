BUILD = ../../build
CC = g++
FLAGS = -Wextra -Wall

main: queue_tester.cpp Queue.o
	$(CC) $(FLAGS) -o queue_tester queue_tester.cpp Queue.o

Queue: Queue.h Queue.cpp
	$(CC) $(FLAGS) -c Queue.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
