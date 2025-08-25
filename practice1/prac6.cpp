#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "Enter a number to find the multiplication table of: ";
	cin >> a;

	for (int i = 1; i <= 10; i++)
	{
		cout << a << " * " << i << " = " << (i * a) << endl;
	}

	return 0;
}