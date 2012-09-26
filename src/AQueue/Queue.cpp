#include "Queue.h"
#include "assert.h"

Queue::Queue(int initialSize) {
 theQueue = new int[initialSize];
 capacity = initialSize;
 size = 0;
 front = 0;
 back = 0;
}

Queue::~Queue() {
 delete[] theQueue;
}

void Queue::enqueue(int i) {
 //check for full queue, copy queue into double size queue
 if(size >= capacity){
  int* temp = theQueue;
  theQueue = new int[capacity * 2];

  for(int i = 0; i < (size); i++) {
   theQueue[i-front] = temp[(i+front)%size]; //assigns the old queue values into a new, justified position at the start
  }
  capacity *= 2;
  delete[] temp;
 }
 
 theQueue[back] = i;
 if(size >= 1){
 back++;
 }
 size++;
}

int Queue::dequeue() {
 assert(!isEmpty()); //asserts that the queue isn't empty
 //check for 1/4 full queue, create smaller queue and copy values
 if(size <= capacity/4) {
  int* temp = theQueue;
  theQueue = new int[capacity/2];

  for(int i = 0; i < size; i++) {
   theQueue[i] = temp[(i+front)%size]; // assigns the old Queue value into a new, justified position
  }
  capacity /= 2;
  delete[] temp;
 }
 
 int value = theQueue[front];
 theQueue[front] = 0;
 if(size >= 1) { 
 front++;
 }
 size--;
 return *value;
}

int Queue::getSize() {
 return size;
}

bool Queue::isEmpty() {
 return (size == 0);
}
