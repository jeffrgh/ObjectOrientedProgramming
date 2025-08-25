#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a;
	cout << "Enter an integer: ";
	cin >> a;
	// for (int i = 2; i < sqrt(a); i++)
	for (int i = 2; i < sqrt(a); i++)
	{
		if (a % i == 0)
		{
			cout << "Number is not prime.";
			return 0;
		}
	}
	cout << "Number is prime.";

	return 0;
}