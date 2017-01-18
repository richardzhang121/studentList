#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>

using namespace std;

class Student;

class Node{
    //sets variables
    private:
    Student* student;
    Node* node;
    int value;
    public:
    Node();
    ~Node();
    void setNext(Node* newnode);
    Student* getStudent();
    Node* getNext();
    void setValue(int newValue);
    int getValue();
};

#endif