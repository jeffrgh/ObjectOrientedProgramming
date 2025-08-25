#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter a number to find the factorial of: ";
	cin >> n;
	int fac = 1;

	for (int i = 1; i <= n; i++)
	{
		fac *= i;
		// cout << fac << endl;
	}

	cout << "The factorial of " << n << " is " << fac;

	return 0;
}