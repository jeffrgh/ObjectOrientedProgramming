#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter a number to find the fibonnaci series up to: ";
	cin >> n;

	int temp = 0;
	int a = 0, b = 1;

	for (int i = 0; i < n; i++)
	{
		if (i <= 1)
		{
			cout << i << "  ";
		}
		else
		{
			temp = a + b;
			a = b;
			b = temp;
			cout << b << "  ";
		}
	}
}