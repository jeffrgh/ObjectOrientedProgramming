#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "Enter a number: ";
	cin >> a;

	int b = 0;
	int c;
	while (a != 0)
	{
		c = a % 10;
		b = b * 10 + c;
		a /= 10;
	}
	cout << "The reversed number is: " << b;

	return 0;
}