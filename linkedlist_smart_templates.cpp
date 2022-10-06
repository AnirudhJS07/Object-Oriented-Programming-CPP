#include <iostream>
#include <memory>
template <typename T>
class Node {
 public:
  Node(T v) : data{v} {}
  T data{};
  std::shared_ptr<Node<T>> next = nullptr;
};

template <typename T>
class List {
 public:
  std::shared_ptr<Node<T>> start;
  void appendNode(T);
  void printList();
  void clear();
};

template <typename T>
void List<T>::appendNode(T v) {
  if (start == nullptr) {
    start = std::make_shared<Node<T>>(v);
  } else {
    std::shared_ptr<Node<T>> e = start;
    while (e->next != nullptr) {
      e = e->next;
    }
    e->next = std::make_shared<Node<T>>(v);
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

template <typename T>
void List<T>::printList() {
  std::shared_ptr<Node<T>> e = start;
  while (e != nullptr) {
    std::cout << e->data << std::endl;
    e = e->next;
  }
}

int main() {
  std::shared_ptr<List<int>> mylist = std::make_shared<List<int>>();

  mylist->appendNode(1);
  mylist->appendNode(2);
  mylist->appendNode(3);
  mylist->appendNode(4);
  mylist->printList();

  std::shared_ptr<List<std::string>> strList =
      std::make_shared<List<std::string>>();
  strList->appendNode("one");
  strList->appendNode("two");
  strList->appendNode("three");
  strList->printList();

  // Because of using shared_ptr one does not need to think
  // about object deletion at end of program execution

  return 0;
}