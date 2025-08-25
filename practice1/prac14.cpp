#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int setPrime = 1;
	int primeCount = 0;
	int noPrimeCount = 0;
	for (int a = 1; a <= 100; a++)
	{
		setPrime = 0;
		if (a == 1)
		{
			noPrimeCount++;
			cout << "Number is not prime." << a << endl;
			setPrime = 1;
		}
		for (int i = 2; i <= sqrt(a); i++)
		{
			if (a % i == 0)
			{
				noPrimeCount++;
				cout << "Number is not prime." << a << endl;
				setPrime = 1;
				break;
			}
		}
		if (!setPrime)
		{
			primeCount++;
			cout << "Number is prime." << a << endl;
		}
	}

	cout << "Number of prime numbers from 1 to 100 are " << primeCount << " and the number of non prime numbers from 1 to 100 are " << noPrimeCount;

	return 0;
}