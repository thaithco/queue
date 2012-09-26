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
 //end check

 if(size > 0){ //if the array is not empty, move index and input -- empty to one-element array does not move index value
  back=(back+1)%capacity;   
  theQueue[back] = i;
 }
 else{
  theQueue[back] = i;
 }
 size++;
}

int Queue::dequeue() {

 //asserts that the queue isn't empty
 assert(!isEmpty());

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
 //end check

 //assign the front value to a temp variable, then remove the value
 int value = theQueue[front];
 theQueue[front] = 0;

 //if the queue is not a one element queue -- one element to empty queue does not move index pointer
 if(size > 1) {
  front=(front+1)%capacity;
 }
 size--;
 return value;
}

int Queue::getSize() {
 return size;
}

bool Queue::isEmpty() {
 return (size == 0);
}
