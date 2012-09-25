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

 cout << q->size() << endl;

 cout << q->dequeue() << endl;
 cout << q->dequeue() << endl;
 cout << q->dequeue() << endl;

 cout << q->size() << endl;
}

