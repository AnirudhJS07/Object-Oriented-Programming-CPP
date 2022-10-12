#include <iostream>
#include <string>

template <typename T>
class Node {
 public:
  Node(T v) : data{v} {}
  T data{};
  Node* next = nullptr;
};

template <typename T>
class List {
 public:
  Node<T>* start;
  void appendNode(T);
  void printList();
  void clear();
};

template <typename T>
void List<T>::appendNode(T v) {
  if (start == nullptr) {
    start = new Node(v);
  } else {
    Node<T>* e = start;
    while (e->next != nullptr) {
      e = e->next;
    }
    e->next = new Node(v);
  }
}

template <typename T>
void List<T>::clear() {
  Node<T>* e = start;
  Node<T>* t = start;
  while (e->next != nullptr) {
    t = e;
    e = e->next;
    delete t;
  }
  delete e;
}

template <typename T>
void List<T>::printList() {
  Node<T>* e = start;
  while (e != nullptr) {
    std::cout << e->data << std::endl;
    e = e->next;
  }
}

int main() {
  List<int>* intList = new List<int>();
  intList->appendNode(1);
  intList->appendNode(2);
  intList->appendNode(3);
  intList->appendNode(4);
  intList->printList();

  List<std::string>* strList = new List<std::string>();
  strList->appendNode("one");
  strList->appendNode("two");
  strList->appendNode("three");
  strList->printList();

  intList->clear();
  strList->clear();
  delete intList;
  delete strList;

  return 0;
}