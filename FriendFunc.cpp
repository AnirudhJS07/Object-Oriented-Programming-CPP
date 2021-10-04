#include <iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
// Anirudh Sharma 2K20/SE/17

class friendfunc2;

class friendfunc1 // Class for Friend Func1
{
    int a1,a2;

    public:
    friendfunc1(int x,int y)
    {
        a1=x;
        a2=y;
    }

    friend float average(friendfunc1 f1,friendfunc2 f2);
};

class friendfunc2 // Class for Friend Func2
{
    int a1,a2,a3;

    public:
    friendfunc2(int x,int y,int z)
    {
        a1=x;
        a2=y;
        a3=z;
    }

    friend float average(friendfunc1 f1,friendfunc2 f2);
};

float average(friendfunc1 f1, friendfunc2 f2) // Function for Calculating Average
{
    return float((f1.a1 + f1.a2 + f2.a1 + f2.a2 + f2.a3))/float(5);
}

// Driver Code
int main()
{
    friendfunc1 obj1(72,83);
    friendfunc2 obj2(21,53,65);

    float ans = average(obj1,obj2);

    cout << "The Average is : "<< ans << endl;
}