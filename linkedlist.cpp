#include <iostream>

class Node {
 public:
  Node(int v) : data{v} {}
  int data{};
  Node* next = nullptr;
};

class List {
 public:
  Node* start;
  void appendNode(int);
  void printList();
  void clear();
};

void List::appendNode(int v) {
  if (start == nullptr) {
    start = new Node(v);
  } else {
    Node* e = start;
    while (e->next != nullptr) {
      e = e->next;
    }
    e->next = new Node(v);
  }
}

void List::clear() {
  Node* e = start;
  Node* t = start;
  while (e->next != nullptr) {
    t = e;
    e = e->next;
    delete t;
  }
  delete e;
}

void List::printList() {
  Node* e = start;
  while (e != nullptr) {
    std::cout << e->data << std::endl;
    e = e->next;
  }
}

int main() {
  List* mylist = new List();

  mylist->appendNode(1);
  mylist->appendNode(2);
  mylist->appendNode(3);
  mylist->appendNode(4);
  mylist->printList();

  mylist->clear();
  delete mylist;

  return 0;
}