#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "Enter a number: ";
	cin >> a;
	int length = 0;
	int c = a;
	while (c > 0)
	{
		length++;
		c /= 10;
	}

	// cout << length;
	int b = -1;
	int temp = a;
	while (temp > 0)
	{
		int digit = temp % 10;
		if (digit > b)
		{
			b = digit;
		}
		temp /= 10;
	}

	cout << "The largest digit is " << b;

	return 0;
}