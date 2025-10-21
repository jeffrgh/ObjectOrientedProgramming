#include <iostream>

using namespace std;

class c2;

class c1
{
private:
	int a;

public:
	c1(int a1)
	{
		this->a = a1;
	};

	friend void compare(c1 a, c2 b);
};

class c2
{
private:
	int a;

public:
	c2(int a1)
	{
		this->a = a1;
	};

	friend void compare(c1, c2);
};

void compare(c1 a, c2 b)
{
	if (a.a == b.a)
	{
		cout << a.a << " == " << b.a << endl;
	}
	else
	{
		cout << a.a << " != " << b.a << endl;
	};
};

int main()
{
	c1 a(10);
	c2 b(14);

	compare(a, b);

	return 0;
};