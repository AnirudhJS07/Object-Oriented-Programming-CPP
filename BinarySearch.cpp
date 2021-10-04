#include<iostream>
#include<cmath>
using namespace std;

// Anirudh Sharma 2K20/SE/17
int binarysearch(int a[],int n,int key)
{
    int e = n-1, s = 0, mid;
    while(e >= s)
    {
        mid = (e+s)/2;

        if(a[mid] == key)
        {
            return mid+1;
        }
        else if(a[mid] > key)
        {
            e = mid-1;
        }
        else
        {
            s= mid+1;
        }
    }
    return -1;
}
int main()
{
    int n, key;
    cout << "Enter the size of the Array: "<< endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the Array: "<< endl;
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number you want to search for: " << endl;
    cin >> key;

    int m = binarysearch(arr, n, key);
    if(m==-1)
    {
        cout<<"Number NOT FOUND";
    }
    else
    {
        cout<<"Required Number is PRESENT at the position "<< m;
    }
	return 0;
}