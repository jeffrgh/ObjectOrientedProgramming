#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	int temp;
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main()
{
	int num1, num2;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	cout << "The greatest common divisor of " << num1 << " and " << num2 << " is " << gcd(num1, num2);

	return 0;
}