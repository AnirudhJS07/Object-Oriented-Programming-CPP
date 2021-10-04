#include <iostream>
using namespace std;
#define MAX 5
// Anirudh Sharma 2K20/SE/17

// Driver Code
int main()
{
    int array_of_integers[MAX]; //Array of integers
    int *array_of_ptr[MAX];     //Array of pointers

    //Entering elements in the array of integers
    cout << "Enter the elements in the array of integers: " << endl;
    for (int i = 0; i < MAX; i++)
    {
        cin >> array_of_integers[i];
    }

    //Entering addresses of the elements to array of pointers
    for (int i = 0; i < MAX; i++)
    {
        array_of_ptr[i] = &array_of_integers[i];
    }

    //Printing value of elements using array_of_integers
    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of array_of_integers[" << i << "] = ";
        cout << array_of_integers[i] << endl;
    }

    //Printing value of elements using *array_of_ptr
    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of array_of_integers[" << i << "] = ";
        cout << *array_of_ptr[i] << endl;
    }

    //Printing address of elements using array_of_ptr
    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of array_of_integers[" << i << "] = ";
        cout << array_of_ptr[i] << endl;
    }

    return 0;
}