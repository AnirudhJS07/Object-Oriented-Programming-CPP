#include <iostream>
using namespace std;
// Anirudh Sharma 2K20/SE/17

void sum(int a, double b)
{
    cout << a + b << endl;
}

void sum(double a, int b)
{
    cout << a + b << endl;
}

int main()
{
    sum(15, 8.9093);
    sum(29.84729, 25);
    return 0;
}
