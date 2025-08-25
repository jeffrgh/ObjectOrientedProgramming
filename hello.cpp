#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// std ::cout << "Hello World";
	cout << "Hello World! \n";
	float a;
	cout << "Enter a number: ";
	cin >> a;
	cout << "The square of the number you typed is: ";
	// a *= a;
	a = pow(a, 2.0);
	cout << a;
	return 0;
}