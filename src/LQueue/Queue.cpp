#include "Queue.h"
#include <list>

Queue::Queue(int size) {
 list<int>* theQueue = new list<int>(size);
 initialSize = size;
}

Queue::~Queue() {
 delete theQueue;
}

void Queue::enqueue(int i) {
 assert(theQueue->size() <= theQueue->max_size)(); //asserts that the queue isn't bigger than the maximum size somehow

 if(theQueue->size() = theQueue->max_size()){
  theQueue->resize(theQueue->max_size() * 2);
 }

 theQueue->push_back(i);

}

int Queue::dequeue() {
 assert(!isEmpty()); //asserts that the queue isn't empty

 if(theQueue->size() = theQueue->max_size()/4 && theQueue->max_size() > initialSize){
  theQueue->resize(theQueue->max_size() / 2); //halves the size of the array if 1/4 of the array is being used
 }

 return theQueue->pop_front(); 
}

int Queue::size() {
 return theQueue->size();
}

bool isEmpty() {
 return (theQueue->size() <= 0);
}
