#include <iostream>
#include <cmath>
using namespace std;
// Anirudh Sharma 2K20/SE/17

float calculateStdDev(float data[], int n)
{
    float sum = 0.0, mean, standardDeviation = 0.0;

    for (int i = 0; i < n; ++i)
    {
        sum += data[i];
    }

    mean = sum / n;

    for (int i = 0; i < 10; ++i)
    {
        standardDeviation += pow((data[i] - mean), 2);
    }

    return sqrt(standardDeviation / n);
}

int main()
{
    int i, n;
    cout << "Enter no. of elements: ";
    cin >> n;
    float data[n];
    cout << "Enter the elements: ";
    for (i = 0; i < n; ++i)
        cin >> data[i];

    cout << endl
         << "Standard Deviation = " << calculateStdDev(data, n) << endl
         << "Variance = " << sqrt(calculateStdDev(data, n)) << endl;

    return 0;
}