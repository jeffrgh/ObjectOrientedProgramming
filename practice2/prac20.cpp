#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	int sum = 0;
	int count = 0;
	int avg = 0;

	cout << "Enter marks (-1 to stop): ";

	while (i != -1)
	{
		cin >> i;
		sum += i;
		count++;
	}

	avg = (sum / count);

	cout << "The average mark is " << avg;

	return 0;
}