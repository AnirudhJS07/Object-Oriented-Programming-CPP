#include <bits/stdc++.h>
using namespace std;
// Anirudh Sharma 2K20/SE/17

// Template declaration
template <class T>

// Template overloading of function
void display(T t1)
{
    cout << "Displaying Template: "
         << t1 << "\n";
}

// Template overloading of function
void display(int t1)
{
    cout << "Explicitly display: "
         << t1 << "\n";
}

// Driver Code
int main()
{
    // Function Call with a
    // different arguments
    display(200);
    display(12.40);
    display('G');

    return 0;
}