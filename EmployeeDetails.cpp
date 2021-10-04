#include <iostream>
using namespace std;
// Anirudh Sharma 2K20/SE/17
class Employee
{
    int Empnumber;
    string Empname;

public:
    void getdata()
    {
        cout << "Enter the Employee's name and number:\n";
        cin >> Empname;
        cin >> Empnumber;
    }
    void display()
    {
        cout << "Name: " << Empname << "  Employee Number: " << Empnumber << endl;
    }
};
// Driver Code
int main()
{
    Employee details[8];
    cout << "Enter the details of 8 employees: " << endl;
    for (int i = 0; i < 8; i++)
    {
        details[i].getdata();
    }
    cout << "\nThe details of all the employees are: " << endl;
    for (int i = 0; i < 8; i++)
    {
        details[i].display();
    }
    return 0;
}