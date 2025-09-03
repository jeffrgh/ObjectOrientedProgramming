#include <iostream>

using namespace std;

class Complex
{
private:
	float x;
	float y;

public:
	static int count;

	Complex(float a, float b)
	{
		this->x = a;
		this->y = b;
		count++;
	};

	void getCount()
	{
		cout << "The number of objects are: " << count << endl;
	};

	void getDetails()
	{
		cout << "The x and y values are: " << x << " and " << y << endl;
	};

	friend void addNumbers(Complex c, Complex d);
};

void addNumbers(Complex c, Complex d)
{
	float sumX = c.x + d.x;
	float sumY = c.y + d.y;
	cout << "The sum of the two numbers are: " << sumX << " and " << sumY;
};

int Complex::count = 0;

int main()
{
	Complex a1(1, 2);
	Complex a2(3, 4);
	Complex a3(5, 6);

	a3.getCount();
	a3.getDetails();

	addNumbers(a1, a2);

	return 0;
}