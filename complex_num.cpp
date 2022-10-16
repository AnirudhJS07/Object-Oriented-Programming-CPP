#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int x, int y)
    {
        real = x;
        img = y;
    }
    Complex(Complex &z)
    {
        real = z.real;
        img = z.img;
    }
    ~Complex()
    {
        cout << "Destructor has been invoked " << endl;
    }
    void display()
    {
        if (img >= 0)
            cout << "The complex number is  : " << real << "+" << img << "i" << endl;
        else
            cout << "The complex number is  : " << real << img << "i" << endl;
    }
};

int main(int argc, char const *argv[])
{
    int r, i;
    Complex a;
    a.display();
    cout << "Enter the real part of the complex number : ";
    cin >> r;
    cout << "Enter the maginary part of the complex number : ";
    cin >> i;
    Complex b(r, i);
    b.display();
    Complex c = b;
    c.display();
    return 0;
}
