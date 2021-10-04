#include <iostream>
using namespace std;
// Anirudh Sharma 2K20/SE/17
int main()
{
    // Initializing the integer
    double x = -1.23;
    cout.precision(5);
    // Using internal()
    cout << "Internal flag: ";
    cout.width(12);
    cout << internal << x << endl;
    return 0;
}
