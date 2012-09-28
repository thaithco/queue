#ifndef __QUEUE_H__
#define __QUEUE_H__

#include "Node.h"

class Queue {
 private:
  Node* front;
  Node* back;
  int size;
  int capacity;

 public:
  Queue();
  ~Queue();
  void enqueue(int i);
  int dequeue();
  int getSize();
  bool isEmpty();
};

#endif
