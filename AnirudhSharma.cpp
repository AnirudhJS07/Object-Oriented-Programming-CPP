#include <iostream>
using namespace std;
// Anirudh Sharma 2K20/SE/17

class Base
{
public:
    Base()
    {
        cout << "This is the constructor for the base class Base." << endl;
    }

    ~Base()
    {
        cout << "This is the destructor for the base class Base." << endl;
    }
};

class Derived1 : public Base
{
public:
    Derived1()
    {
        cout << "This is the constructor for the first derived class Derived1." << endl;
    }

    ~Derived1()
    {
        cout << "This is the destructor for the first derived class Derived1." << endl;
    }
};

class Derived2 : public Derived1
{
public:
    Derived2()
    {
        cout << "This is the constructor for the second derived class Derived2." << endl;
    }

    ~Derived2()
    {
        cout << "This is the destructor for the second derived class Derived2." << endl;
    }
};

// Driver Code
int main()
{
    Derived2 example_obj;
    example_obj.~Derived2();
    return 0;
}