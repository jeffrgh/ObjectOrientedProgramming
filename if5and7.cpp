#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "Enter a number: " << endl;
	cin >> a;
	if (a % 5 == 0 && a % 7 == 0)
	{
		cout << "Number is divisible by both 5 & 7" << endl;
	}
	else if (a % 5 == 0)
	{
		cout << "Number is only divisible by 5" << endl;
	}
	else if (a % 7 == 0)
	{
		cout << "Number is only divisible by 7" << endl;
	}
	else
	{
		cout << "Number is not divisible by either 5 or 7" << endl;
	}
	return 0;
}