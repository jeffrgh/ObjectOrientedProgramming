#include <iostream>

using namespace std;

class Complex
{
private:
	float a;
	float b;

public:
	// static int count;
	Complex(float x, float y)
	{
		this->a = x;
		this->b = y;
		cout << "Complex number " << a << " + i" << b << " has been created." << endl;
	};

	void getDetails()
	{
		cout << "Number is: " << a << " + " << b << "i" << endl;
	};

	Complex operator+(const Complex &secondObj)
	{
		Complex c3(0, 0);
		c3.a = this->a + secondObj.a;
		c3.b = this->b + secondObj.b;
		return c3;
	};

	~Complex()
	{
		cout << "Complex number " << a << " + i" << b << " has been destroyed." << endl;
		// cout << "The complex has been destroyed." << endl;
	};
};

// int Complex ::count = 0;

int main()
{
	{
		Complex c1(6, 5), c2(7, 8), c4(0, 0);
		c4 = c1 + c2;
		c4.getDetails();
	}

	Complex c6(4, 9), c7(5, 9), c9(0, 0);
	c9 = c6 + c7;
	c9.getDetails();

	return 0;
}