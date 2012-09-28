#include "Node.h"

Node::Node(int v) {
 value = v;
}

Node::~Node() {
}

Node* Node::getNext() {
 return next;
}

int Node::getValue() {
 return value;
}

void Node::setNext(Node* n) {
 next = n;
}
