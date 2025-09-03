#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	int fac = 1;
	int counter = 1;

	while (counter <= n)
	{
		fac *= counter;
		counter++;
	}

	cout << fac << " is the factorial of " << n << endl;

	return 0;
}