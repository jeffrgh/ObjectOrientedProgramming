#include <iostream>

using namespace std;

// Write two functions to compare two integers and two floats and return the max/min as u wish.

int comp(int a, int b)
{
	// if (a > b) {
	// 	return a;
	// }
	// else {
	// 	return b;
	// };
	return a > b ? a : b;
};

float comp(float a, float b)
{
	// if (a < b) {
	// 	return a;
	// }
	// else {
	// 	return b;
	// };
	return a < b ? a : b;
};

int main()
{
	int x = 5, y = 8;
	int c = comp(x, y);
	float d = 3.2, e = 4.5;
	float f = comp(d, e);

	cout << "The maximum value between " << x << " and " << y << " is: " << c << endl;

	cout << "The minimum value betweeen " << d << " and " << e << " is: " << f << endl;

	return 0;
};