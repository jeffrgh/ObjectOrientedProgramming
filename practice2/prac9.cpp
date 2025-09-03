#include <iostream>

using namespace std;

int main()
{
	int a;
	do
	{
		cout << "Enter a number (negative number to stop): ";
		cin >> a;
	} while (a >= 0);

	return 0;
}