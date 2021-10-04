#include <bits/stdc++.h>
using namespace std;
// Anirudh Sharma 2K20/SE/17

class Calculate;
class Student    // Class for Student Details and Input
{
    string name;
    float mark1, mark2, mark3;

public:
    float avg;
    void get_data(string n, float m1, float m2, float m3)
    {
        name = n;
        mark1 = m1;
        mark2 = m2;
        mark3 = m3;
    }
    void display()
    {
        cout << "\n Name : " << name;
        cout << "\n Marks in subject 1 : " << mark1;
        cout << "\n Marks in subject 2 : " << mark2;
        cout << "\n Marks in subject 3 : " << mark3;
    }
    friend class Calculate;
};

class Calculate  // Class to Calculate Average
{
public:
    float mark_avg(Student &S)
    {
        return ((S.mark1 + S.mark2 + S.mark3) / 3);
    }
};

// Driver Code
int main()
{
    Student S;
    S.get_data("Anirudh", 97, 99, 100);
    Calculate C1;
    S.display();
    cout << "\n Average marks : " << C1.mark_avg(S);
}