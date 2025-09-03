#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	int temp;
	int rev = 0;

	do
	{
		temp = num % 10;
		rev = rev * 10 + temp;
		num /= 10;
	} while (num != 0);

	cout << "The reversed number is: " << rev << endl;

	return 0;
}