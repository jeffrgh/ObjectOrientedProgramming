#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "Enter a number: ";
	cin >> a;

	int b = 0;
	while (a != 0)
	{
		int c;
		c = a % 10;
		b += c;
		a /= 10;
	}

	cout << "The sum of the digits are: " << b;

	return 0;
}