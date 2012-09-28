#include "Queue.h"
#include <iostream>
#include "assert.h"

using std::cout;
using std::endl;

int main(){

 Queue* q = new Queue();
 
 q->enqueue(1);
 cout << "Dequeue 1: " << q->dequeue() << endl;


 q->enqueue(2);
 cout << "Dequeue 2: " << q->dequeue() << endl;

 q->enqueue(3);

 cout << q->getSize() << endl;

// cout << "Dequeue 1: " << q->dequeue() << endl;
// cout << "Dequeue 2: " << q->dequeue() << endl;
 cout << "Dequeue 3: " << q->dequeue() << endl;

 cout << q->getSize() << endl;

 q->enqueue(1);
 q->enqueue(2);

 cout << "Dequeue 1: " << q->dequeue() << endl;
 cout << "Size 1: "    << q->getSize() << endl;
 cout << "Dequeue 2: " << q->dequeue() << endl;
 cout << "Size 0: "    << q->getSize() << endl;

 for(int i = 0; i<5; i++){
  assert(q->getSize()>=i);
  //q->enqueue(i);
 }

 for(int j = 4; j>0; j--){
  //cout << "Dequeue " << j << ": " << q->dequeue() << endl;
  //cout << "Size "    << j << ": " << q->getSize() << endl;
 }
}

