#include <iostream>
using namespace std;
// Anirudh Sharma 2K20/SE/17
int main()
{
    // Initializing the float values
    double x = 1.0;
    cout.precision(5);
    cout << "Without fixed flag: "
         << x << endl;
    // Using fixed()
    cout << "With fixed flag: "
         << fixed << x << endl;
    return 0;
}
