#include <iostream>
#include<cmath>
using namespace std;
// Anirudh Sharma 2K20/SE/17

inline int additionOf(int a, int b) // Inline function for Addition
{
    return a + b;
}

inline double divisionOf(double x, double y) // Inline function for Division
{
    return x / y;
}

inline float differenceOf(float a, float b) // Inline function for Difference
{
    return a - b;
}

inline int modulusOf(int x, int y) // Inline function for Modulus
{
    return x % y;
}

inline long int productOf(long int a, long int b) // Inline function for Multiplication
{
    return a * b;
}

// Driver Code;
int main()
{
    int a, b;
    double x, y;
    float i, j;
    long int e, f;

    cout << "SUM";
    cout << "\nEnter 2 integer values for calculating their SUM: ";
    cin >> a >> b;
    cout << "Sum of " << a << " and " << b << " = " << additionOf(a, b) << "\n";

    cout << "DIVISION";
    cout << "\nEnter 2 double values for performing DIVISION: ";
    cin >> x >> y;
    cout << "Value of " << x << " divided by " << y << " = " << divisionOf(x, y) << "\n";

    cout << "DIFFERENCE";
    cout << "\nEnter 2 float values for calculating their DIFFERENCE : ";
    cin >> i >> j;
    cout << "Difference between " << i << " and " << j << " = " << differenceOf(i, j) << "\n";

    cout << "MODULUS";
    cout << "\nEnter 2 integer values for calculating their MODULUS(i.e., Remainder): ";
    cin >> a >> b;
    cout <<  a << " Modulus " << b << " = " << modulusOf(a, b) << "\n";

    cout << "PRODUCT";
    cout << "\nEnter 2 long integer values for calculating their PRODUCT: ";
    cin >> e >> f;
    cout << "Product of " << e << " and " << f << " = " << productOf(e, f) << "\n";

    return 0;
}