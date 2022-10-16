#include <iostream>
using namespace std;

class Complex
{
private:
    int a;
    int b;

public:
    void input()
    {
        cout << "\nEnter the real part of complex number : ";
        cin >> a;
        cout << "Enter the imaginary part of complex number : ";
        cin >> b;
    }
    void display()
    {
        if (b > 0)
            cout << "\nThe complex number is  : " << a << "+" << b << "i" << endl;
        else
            cout << "\nThe complex number is  : " << a << b << "i" << endl;
    }
    friend Complex sum(Complex, Complex);
};

Complex sum(Complex x, Complex y)
{
    Complex ans;
    ans.a = x.a + y.a;
    ans.b = x.b + y.b;
    return ans;
}

int main()
{
    Complex z1;
    Complex z2;
    Complex z;
    cout << "Enter 2 complex number : " << endl;
    z1.input();
    z2.input();
    z1.display();
    z2.display();
    cout << "\nThe sum of the complex number are : " << endl;
    z = sum(z1, z2);
    z.display();
    return 0;
}