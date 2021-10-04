#include <iostream>
using namespace std;
// Anirudh Sharma 2K20/SE/17

void fun(int array[])
{
    for (int i = 0; i < 2; i++)
    {
        cin >> array[i];
    }
    cout << array[1] << endl;
}
void fun(int array[][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> array[i][j];
        }
        cout << array[0][2] << endl;
    }
}
int main()
{
    int arr[0], a[2][3];
    fun(arr);
    fun(a);
    return 0;
}
