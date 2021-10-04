#include <iostream>
using namespace std;
// Anirudh Sharma 2K20/SE/17

void function(int x=0, int y=0)
{
    cout << x + y << endl;
}

int main()
{
    function();
    function(5);
    function(5, 62);

    return 0;
}
