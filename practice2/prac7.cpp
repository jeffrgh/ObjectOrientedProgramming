#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a;
	cout << "Enter a number: ";
	cin >> a;
	int isPrime = 1;

	if (a > 1)
	{
		for (int i = 2; i < sqrt(a); i++)
		{
			if (i % 2 == 0)
			{
				cout << "Number is not prime.";
				isPrime = 0;
				break;
			}
		}
		if (isPrime)
		{
			cout << "Number is prime.";
		}
	}
	else if (a <= 1 && a >= 0)
	{
		cout << "Number is not prime.";
	}
	else
	{
		cout << "Invalid input.";
		return 1;
	}

	return 0;
}