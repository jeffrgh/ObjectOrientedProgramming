#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;

	cout << "Enter two numbers: ";
	cin >> a >> b;

	if (a > b)
	{
		cout << a << " is greater than " << b;
	}
	else if (a < b)
	{
		cout << b << " is greater than " << a;
	}
	else if (a == b)
	{
		cout << "Both " << a << " and " << b << " are equal.";
	}
	else
	{
		cout << "Invalid input.";
	}

	return 0;
}