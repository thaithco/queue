#ifndef __QUEUE_H__
#define __QUEUE_H__

class Queue {
 private:
  list<int>* theQueue;
  int initialSize;

 public:
  Queue(int size = 10);
  ~Queue();
  void enqueue(int i);
  int dequeue();
  int getSize();
  bool isEmpty();
}

#endif
