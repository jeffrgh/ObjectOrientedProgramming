#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter a number to find the sum uptil of: ";
	cin >> n;
	int sum = 0;

	for (int i = 0; i <= n; i++)
	{
		sum += i;
		// cout << sum << endl;
	}

	cout << "The sum of the first " << n << " natural numbers is " << sum;

	return 0;
}