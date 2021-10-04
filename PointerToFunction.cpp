#include <iostream>
using namespace std;
// Anirudh Sharma 2K20/SE/17

int add(int a, int b)
{
    return a + b;
}
// Driver Code
int main()
{
    int (*funcptr)(int, int); // function pointer declaration
    funcptr = add;            // funcptr is pointing to the add function
    int sum = funcptr(5, 5);
    cout << "Value of SUM is :" << sum << endl;

    return 0;
}