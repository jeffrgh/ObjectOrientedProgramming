#include <iostream>

using namespace std;

int main()
{
	int a;

	cout << "Enter a number to check if it is postive, negative or zero: ";
	cin >> a;

	if (a > 0)
	{
		cout << "Number is postive.";
	}
	else if (a < 0)
	{
		cout << "Number is negative.";
	}
	else if (a == 0)
	{
		cout << "Number is zero.";
	}
	else
	{
		cout << "Invalid input.";
	}

	return 0;
}