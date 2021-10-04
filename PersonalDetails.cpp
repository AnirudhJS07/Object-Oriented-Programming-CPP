#include <iostream>
using namespace std;
// Anirudh Sharma

struct personalDetails
{
    int roll;
    string firstName;
    string lastName;
    int marks;
    string gender;
    string result;
};

string gender(string gender)
{
    string m = "Male";
    string f = "Female";
    string others = "Non Binary";
    if (gender == "M" || "m")
    {
        return m;
    }
    else if (gender == "F" || "f")
    {
        return f;
    }
    else
    {
        return others;
    }
}

string result(int marks)
{
    string pass = "Pass";
    string fail = "Fail";
    if (marks >= 33)
    {
        return pass;
    }
    else
    {
        return fail;
    }
}

struct personalDetails d[1];

// Driver Code;
int main()
{
    system("cls");
    cout << "\tPersonal Details of Student\n";
    int i;
    for (int i = 0; i < 1; i++)
    {
        cout << "Enter Student Number: " << i + 1 << endl;
        cout << "Student Roll Number : ";
        cin >> d[i].roll;

        cout << "Enter First Name : ";
        cin >> d[i].firstName;

        cout << "Enter Surname : ";
        cin >> d[i].lastName;

        cout << "Enter Marks out of 100 : ";
        cin >> d[i].marks;

        cout << "Gender of the Student(M/F/Others) : ";
        cin >> d[i].gender;
    }

    cout << "\nYou have entered the following data\n";
    cout << "Roll Number \tFirst Name \tSurname \tMarks \tGender \tResult\n";
    for (i = 0; i < 1; i++)
    {
        cout << "\t" << d[i].roll;
        cout << "\t\t" << d[i].firstName;
        cout << "\t" << d[i].lastName;
        cout << "\t\t" << d[i].marks;
        cout << "\t" << gender(d[i].gender);
        cout << "\t" << result(d[i].marks);
    }
    return 0;
}