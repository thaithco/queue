#include "Queue.h"
#include "assert.h"

Queue::Queue() {
 size = 0;
 front = 0;
 back = 0;
}

Queue::~Queue() {
 Node* temp = front;
 while (front != 0) {
  delete front;
  temp = temp->getNext();
 }
}

void Queue::enqueue(int i) {
 Node* nextNode = new Node(i);
 if (size < 1) {
  front = nextNode;
  back = nextNode;
 }
 else {
  back->setNext(nextNode);
  back = nextNode;
 }
 size++;
}

int Queue::dequeue() {
 assert(!isEmpty()); //asserts that the queue isn't empty

 Node* temp = front;
 delete front;

 front = temp->getNext(); 
 size--;
 return temp->getValue();
}

int Queue::getSize() {
 return size;
}

bool Queue::isEmpty() {
 return (size == 0);
}
