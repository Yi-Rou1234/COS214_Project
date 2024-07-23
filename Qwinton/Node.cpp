#include "Node.h"

Node::Node(CustomerComponent* group){
    this->group = group;
    this->next = nullptr;
}

Node::~Node() {
    delete next;
}

CustomerComponent* Node::getGroup() const {
    return group;
}

Node* Node::getNext() const {
    return next;
}

void Node::setNext(Node* next) {
    this->next = next;
}
