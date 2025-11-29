#include <iostream>

using namespace std;

class A
{
public:
	virtual void f()
	{
		cout << "f from class A." << endl;
	};
	void g()
	{
		cout << "g from class A." << endl;
	};
};

class B : public A
{
public:
	void f()
	{
		cout << "f from class B." << endl;
	};
	void g()
	{
		cout << "g from class B." << endl;
	};
};

int main()
{

	B b;
	A a;
	B *b1 = &b;
	A *a1 = &a;

	a1->f();

	// b1 = (B *)a1; // Downcasting
	a1 = b1;

	b1->f();
	a1->f();

	return 0;
};