#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int sum = 0;
	int n;

	while (sum <= 50)
	{
		cout << "Enter a number: ";
		cin >> n;
		sum += n;
	}
	cout << "The sum has reached over 50.";
}