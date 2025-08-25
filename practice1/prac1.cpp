#include <iostream>

using namespace std;

int main()
{
	char a[100];
	int b;

	cout << "Enter your name: " << endl;
	cin >> a;
	cout << "Enter your age: " << endl;
	cin >> b;

	cout << "Hello " << a << ", you are " << b << " years old.";

	return 0;
}