#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "What is your mark? ";
	cin >> a;

	if (a >= 90)
	{
		cout << "A";
	}
	else if (a >= 80 && a < 90)
	{
		cout << "B";
	}
	else if (a >= 70 && a < 80)
	{
		cout << "C";
	}
	else if (a >= 60 && a < 70)
	{
		cout << "D";
	}
	else
	{
		cout << "E";
	}

	return 0;
}