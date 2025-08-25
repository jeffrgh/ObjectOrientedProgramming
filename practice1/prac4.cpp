#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int c;

	cout << "Enter three numbers: ";
	cin >> a >> b >> c;

	if (a > b && a > c)
	{
		cout << a << " is greatest.";
	}
	else if (a < b && b > c)
	{
		cout << b << " is greatest.";
	}
	else if (c > a && c > b)
	{
		cout << c << " is greatest.";
	}
	else if (a == b == c)
	{
		cout << "Both " << a << ", " << b << " and " << c << " are equal.";
	}
	else
	{
		cout << "Invalid input.";
	}

	return 0;
}