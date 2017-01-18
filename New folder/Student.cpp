#include <iostream>
#include <cstring>
#include "Node.h"

using namespace std;

void add(int newValue);
void print (Node* node);


int main(){
  Node* head = NULL;
  add(2);
  print(head);
  add(3);
  print(head);
  add(2);
  print(head);
}

void add (int newValue){
  Node* current = head;
  if (current==NULL){
    head = new Node();
    head->setValue(newValue);
  }
  else {
    while (current->getNext() != NULL){
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getNext()->setValue(newValue);
  }
}

void print(Node* node){
  if (node==head){
    cout << "List:" << endl;
  }
  if (node != NULL){
    cout << node->getValue() << " " << endl;
    print(node->getNext());
  }
  else{
    //do nothing
  }
}