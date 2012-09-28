#include "Queue.h"
#include "Queue.cpp"
#include <iostream>

using std::cout;
using std::endl;

int main(){

 Queue* q = new Queue();
 
 q->enqueue(1);
 q->enqueue(2);
 q->enqueue(3);

 cout << q->getSize() << endl;

 cout << "Dequeue 1: " << q->dequeue() << endl;
 cout << "Dequeue 2: " << q->dequeue() << endl;
 cout << "Dequeue 3: " << q->dequeue() << endl;

 cout << q->getSize() << endl;
}

