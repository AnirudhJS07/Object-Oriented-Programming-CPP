#include <bits/stdc++.h>
using namespace std;
// Anirudh Sharma 2K20/SE/17

void findRoots(int a, int b, int c)
{
	if (a == 0)
	{
		cout << "Given Equation is not Quadratic";
		return;
	}
	int d = b * b - 4 * a * c;
	double sqrt_val = sqrt(abs(d));
	if (d > 0)
	{
		cout << "Roots are real and different \n";
		cout << (double)(-(b) + sqrt_val) / (2 * (a)) << "\n"
			 << (double)(-(b)-sqrt_val) / (2 * (a)) << endl;
	}
	else if (d == 0)
	{
		cout << "Roots are REAL and SAME\n";
		cout << -(double)b / (2 * a) << endl;
	}
	else
	{
		cout << "Roots are COMPLEX \n";
		cout << -(double)b / (2 * a) << " + i" << sqrt_val
			 << "\n"
			 << -(double)b / (2 * a) << " - i" << sqrt_val << endl;
	}
}

void findRoots2(int *a, int *b, int *c)
{
	if (*a == 0)
	{
		cout << "Given Equation is not Quadratic";
		return;
	}
	int d = (*b) * (*b) - 4 * (*a) * (*c);
	double sqrt_val = sqrt(abs(d));
	if (d > 0)
	{
		cout << "Roots are real and different \n";
		cout << (double)(-(*b) + sqrt_val) / (2 * (*a)) << "\n"
			 << (double)(-(*b) - sqrt_val) / (2 * (*a));
	}
	else if (d == 0)
	{
		cout << "Roots are REAL and SAME\n";
		cout << -(double)(*b) / (2 * (*a));
	}
	else
	{
		cout << "Roots are COMPLEX \n";
		cout << -(double)(*b) / (2 * (*a)) << " + i" << sqrt_val
			 << "\n"
			 << -(double)(*b) / (2 * (*a)) << " - i" << sqrt_val;
	}
}

int main()
{
	int a, b, c, x;
	cout << "Solving roots of Equation of the form ax^2 + bx + c = 0" << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	cout << "The equation inputted is: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
	cout << "Select method to choose for solving roots:" << endl
	     << "1. Call by Value" << endl
		 << "2. Call by Reference" << endl;
	cin >> x;

	switch (x)
	{
	case (1):
		findRoots(a, b, c);
		break;
	case (2):
		findRoots2(&a, &b, &c);
		break;
	default:
		findRoots(a, b, c);
		break;
	}	
	return 0;
}