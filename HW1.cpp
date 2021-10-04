#include <bits/stdc++.h>
using namespace std;
// Anirudh Sharma 2K20/SE/17
int main()
{
    int n;
    cout << "Enter the Number of Elements: ";
    cin >> n;
    cout << "Enter the Elements: ";
    int arr[n];
    int repeat[n] = {0};
    int num[n];
    for (int i = 0; i < n; i++)
    {
        num[i] = INT_MIN;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int counter = -1;
    for (int i = 0; i < n; i++)
    {
        int d = 0;
        for (int j = 0; j <= counter; j++)
            if (num[j] == arr[i])
            {
                repeat[j]++;
                d = 1;
            }
        if (d == 0)
        {
            counter++;
            num[counter] = arr[i];
            repeat[counter]++;
        }
    }
    for (int i = 0; i <= counter; i++)
    {
        cout << num[i] << " : " << repeat[i] << endl;
    }
    return 0;
}