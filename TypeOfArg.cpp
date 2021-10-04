#include <iostream>
using namespace std;
// Anirudh Sharma 2K20/SE/17

int add(int x, int y)
{
    return x + y;
}

float add(float x, float y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}

int main()
{
    cout << add(25, 35) << endl;
    cout << add(30.45f, 25.8f) << endl;
    cout << add(40.625, 78.394) << endl;
    return 0;
}
