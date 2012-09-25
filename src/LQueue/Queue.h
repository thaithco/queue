#ifndef __QUEUE_H__
#define __QUEUE_H__

class Queue {
 private:
  int[]* theQueue;
  int front;
  int back;
  int size;
  int capacity;

 public:
  Queue(int initialSize = 10);
  ~Queue();
  void enqueue(int i);
  int dequeue();
  int getSize();
  bool isEmpty();
}

#endif
