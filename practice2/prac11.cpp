#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter the power of the first number: ";
	cin >> b;
	int i = 1;

	while (i < b)
	{
		a *= a;
		i++;
	}

	cout << "The number is " << a;

	return 0;
}