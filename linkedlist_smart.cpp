#include <iostream>
#include <memory>

class Node {
 public:
  Node(int v) : data{v} {}
  int data{};
  std::shared_ptr<Node> next = nullptr;
};

class List {
 public:
  std::shared_ptr<Node> start;
  void appendNode(int);
  void printList();
  void clear();
};

void List::appendNode(int v) {
  if (start == nullptr) {
    start = std::make_shared<Node>(v);
  } else {
    std::shared_ptr<Node> e = start;
    while (e->next != nullptr) {
      e = e->next;
    }
    e->next = std::make_shared<Node>(v);
  }
}

// because of smart_pointers this function is
// not needed for final cleanup anymore
/*
void List::clear() {
  std::shared_ptr<Node> e = start;
  std::shared_ptr<Node> t = start;
  while (e->next != nullptr) {
    t = e;
    e = e->next;
    // delete t;
  }
  // delete e;
}
*/

void List::printList() {
  std::shared_ptr<Node> e = start;
  while (e != nullptr) {
    std::cout << e->data << std::endl;
    e = e->next;
  }
}

int main() {
  std::shared_ptr<List> mylist = std::make_shared<List>();

  mylist->appendNode(1);
  mylist->appendNode(2);
  mylist->appendNode(3);
  mylist->appendNode(4);
  mylist->printList();

  // Because of using shared_ptr one does not need to think
  // about object deletion at end of program execution

  return 0;
}