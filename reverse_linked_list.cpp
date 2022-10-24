#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *link;

    Node()
    {
        data = 0;
        link = NULL;
    }

    Node(int d)
    {
        this->data = d;
        this->link = NULL;
    }
};

class Linked_list
{
    Node *head;

public:
    Linked_list()
    {
        head = NULL;
    }

    void add_at_end(int);
    void reverse();
    void display();
};

void Linked_list::add_at_end(int d)
{
    Node *newNode = new Node(d);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *ptr = head;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = newNode;
}

void Linked_list::reverse()
{
    Node *prev = NULL;
    Node *next = NULL;
    Node *ptr = head;

    while (ptr != NULL)
    {
        next = ptr->link;
        ptr->link = prev;
        prev = ptr;
        ptr = next;
    }
    ptr = prev;
    head = ptr;
}

void Linked_list::display()
{
    Node *ptr = head;
    while (ptr->link != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->link;
    }
    cout << ptr->data << endl;
}

int main(int argc, char const *argv[])
{
    int n, x;
    Linked_list list;
    cout << "Enter the number of nodes you want to create : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter data for node " << i << ":";
        cin >> x;
        list.add_at_end(x);
    }
    cout << "The linked list is : ";
    list.display();
    cout << endl;
    list.reverse();
    cout << "The linked list after reversing is : ";
    list.display();
    return 0;
}
