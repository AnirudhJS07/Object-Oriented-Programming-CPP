#include <iostream>
using namespace std;
// Anirudh Sharma 2K20/SE/17
// Prototype
void swapx(int x, int y);


int main()
{
    int a = 10;
    int b = 20;

    swapx(a, b);

    cout << "a=" << a << " b=" << b << endl;

    return 0;
}

void swapx(int x, int y)
{
    int t;

    t = x;
    x = y;
    y = t;

    cout << "x=" << x << " y=" << y << endl;
}
