#include <iostream>
#include <cstring>
#include "Node.h"

using namespace std;

Node::Node(){ //creates initial node and sets value to 0
    node = NULL;
    value = 0;
}

Node::~Node(){ //deconstructor
    delete &value;
    node = NULL;
}

Node* Node::getNext(){ //returns the next node pointer
    return node;
}

Student* Node::getStudent(){ //next student pointer
    return NULL;
}

void Node::setNext(Node* newnode){ //sets next node
    node = newnode;
} 

void Node::setValue(int newValue){ //sets the new value
    value = newValue;
}

int Node::getValue(){ //returns value
    return value;
}