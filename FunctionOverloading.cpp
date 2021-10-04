#include <iostream>
using namespace std;
// Anirudh Sharma 2K20/SE/17

class Multiply
{
public:
    int sum(int num1, int num2)
    {
        return num1 * num2;
    }
    int sum(int num1, int num2, int num3)
    {
        return num1 * num2 * num3;
    }
};

// Driver Code
int main()
{
    Multiply obj;
    cout << obj.sum(20, 15) << endl;
    cout << obj.sum(81, 100, 10);
    return 0;
}
