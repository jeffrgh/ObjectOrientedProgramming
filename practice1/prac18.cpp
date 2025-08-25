#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a;
	int isPalindrome;
	cout << "Enter a number: ";
	cin >> a;
	string b = to_string(a);
	int c = b.length();
	for (int i = 0; i < c; i++)
	{
		// cout << b[i] << b[c - i - 1];
		if (b[i] != b[c - i - 1])
		{
			cout << "The number is not a palindrome";
			isPalindrome = 0;
			break;
		}
		isPalindrome = 1;
	}
	if (isPalindrome)
	{
		cout << "The number is a palindrome";
	}

	return 0;
}