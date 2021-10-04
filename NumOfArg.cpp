#include <iostream> 
using namespace std;
// Anirudh Sharma 2K20/SE/17

int add(int a, int b)
{
    return a+b;
}

int add(int a, int b, int c)
{
    return a+b+c;
}

int main()
{
    cout << add(25, 35) << endl;
    cout << add(30, 40, 50) << endl;
    return 0;
}
