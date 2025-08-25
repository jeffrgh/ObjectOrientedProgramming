#include <iostream>

using namespace std;

int main()
{
	int a;

	cout << "Enter a number to check if it is even or odd: ";
	cin >> a;

	if (a % 2 == 0)
	{
		cout << "Number is even.";
	}
	else if (a % 2 == 1)
	{
		cout << "Number is odd.";
	}
	else
	{
		cout << "Invalid input.";
	}

	return 0;
}