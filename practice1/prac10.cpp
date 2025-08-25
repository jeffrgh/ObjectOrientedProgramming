#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "Enter a year: ";
	cin >> a;

	if (a % 4 == 0)
	{
		cout << "It's a leap year.";
	}
	else
	{
		cout << "It's not a leap year.";
	}

	return 0;
}