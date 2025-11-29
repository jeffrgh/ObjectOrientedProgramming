#include <iostream>

using namespace std;

class base
{
public:
	void f()
	{
		cout << "F from base." << endl;
	};
	void g()
	{
		cout << "G from base." << endl;
	};
};

class derived : public base
{
public:
	void f()
	{
		cout << "F from derived." << endl;
	};
	void g()
	{
		cout << "G from derived." << endl;
	};
};

int main()
{
	base b;
	derived d;
	// b1.f();
	// b1.g();
	// d1.f();
	// d1.g();

	base *b1 = &b;
	derived *d1 = &d;
	b1 = d1;

	b1->f();
	b1->g();
	d1->f();
	d1->g();

	return 0;
};