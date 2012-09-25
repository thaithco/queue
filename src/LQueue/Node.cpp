#include "Node.h"

Node::Node(int v) {
 value = v;
}

Node::~Node() {
 delete next;
}

Node* Node::getNext() {
 return nextNode;
}

int Node::getValue() {
 return value;
}

Node* Node::setNext(Node* n) {
 next = n;
}
