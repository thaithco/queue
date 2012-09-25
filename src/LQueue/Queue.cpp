#include "Queue.h"

Queue::Queue() {
 size = 0;
 front = 0;
 back = 0;
}

Queue::~Queue() {
 Node* temp = front
 while (front != 0) {
  delete front;
  temp = temp->getNext();
 }
}

void Queue::enqueue(int i) {
 Node* nextNode = new Node(i);
 if (size < 1) {
  front = back = nextNode;
 }
 else {
 back.setnext(nextNode);
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

int Queue::size() {
 return size;
}

bool isEmpty() {
 return (size == 0);
}
