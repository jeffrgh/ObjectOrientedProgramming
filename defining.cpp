#include <iostream>

using namespace std;

#define maximum 100
#define PI 3.14
#define cube(x) (x * x * x)
#undef cube //*Removes the definition of a variable.*
#define max(a, b) ((a > b) ? a : b)
#define min(a, b) ((a < b) ? a : b)

int main()
{
	cout << "Maximum value is: " << maximum << endl;
	cout << "PI value is: " << PI << endl;
#ifndef cube
#define cube(y) (y * y)
	cout << "Cube of 2 is: " << cube(2) << endl;
#endif
	// int a = 3, b = 4;
	int a, b;
	cout << "Enter the value of A: ";
	cin >> a;
	cout << "Enter the value of B:";
	cin >> b;
	cout << "Max of " << a << " and " << b << " is: " << max(a, b) << endl;

	return 0;
};