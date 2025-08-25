#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a;
	float b;
	float c;
	float x;

	cout << "Enter 3 numbers (a, b, c): ";
	cin >> a >> b >> c;
	cout << "Enter the value of x: ";
	cin >> x;

	float d;
	float r1;
	float r2;
	d = pow(b, 2.0) - (4 * a * c);

	if (d < 0)
	{
		cout << "The roots are imaginary.";
	}
	else if (d >= 0)
	{
		r1 = ((-b) + sqrt(d)) / (2 * a);
		r2 = ((-b) - sqrt(d)) / (2 * a);
		cout << "The roots are real and are " << r1 << " and " << r2;
	}

	return 0;
}