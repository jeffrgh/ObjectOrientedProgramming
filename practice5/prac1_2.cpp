#include <iostream>

using namespace std;

void addLOL(class c1 c, class c2 d);

class c1
{
private:
	int a;

public:
	c1(int a1)
	{
		this->a = a1;
	};

	friend void addLOL(c1 c, c2 d);
};

class c2
{
private:
	int b;

public:
	c2(int b1)
	{
		this->b = b1;
	};

	friend void addLOL(c1 c, c2 d);
};

void addLOL(c1 c, c2 d)
{
	cout << "A + B = " << c.a + d.b << endl;
};

int main()
{
	c1 a(4);
	c2 b(3);

	addLOL(a, b);

	return 0;
};

// what are the chancs