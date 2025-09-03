#include <iostream>

using namespace std;

int main()
{
	int i;
	cout << "Enter a number: ";
	cin >> i;
	int x = 1;
	do
	{
		cout << i << " * " << x << " = " << (i * x) << endl;
		x++;
	} while (x <= 10);

	return 0;
}