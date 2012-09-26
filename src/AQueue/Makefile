BUILD = ../../build
CC = g++
FLAGS = -Wextra -Wall

main: queue_tester.cpp Queue.o
	$(CC) $(FLAGS) queue_tester.cpp -o ./Queue.o

Queue.o: Queue.h Queue.cpp
	$(CC) $(FLAGS) -c Queue.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
