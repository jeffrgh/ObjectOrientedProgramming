#include <iostream>

using namespace std;

class Fraction
{
private:
	float numerator;
	float denominator;

	int gcd(int a, int b)
	{
		while (b != 0)
		{
			int t = b;
			b = a % b;
			a = t;
		}
		return a;
	}

public:
	Fraction()
	{
		this->numerator = 0;
		this->denominator = 1;
	};
	Fraction(float n)
	{
		this->numerator = n;
		this->denominator = 1;
	};
	Fraction(float n, float d)
	{
		this->numerator = n;
		this->denominator = d;
	};
	void get()
	{
		cout << "The fraction is: " << this->numerator << "/" << this->denominator << endl;
	};
	void reduce()
	{
		int n = numerator;
		int d = denominator;
		int g = gcd(abs(n), abs(d));
		if (g > 1)
		{
			cout << "The reduced fraction is: " << numerator / g << "/" << denominator / g << endl;
			denominator /= g;
		}
	}
};

int main()
{
	Fraction f1, f2(15), f3(15, 30);
	f1.get();
	f2.get();
	f3.get();
	f1.reduce();
	f2.reduce();
	f3.reduce();

	return 0;
}