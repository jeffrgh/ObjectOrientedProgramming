#include <iostream>

using namespace std;

class base
{
public:
	void f()
	{
		cout << "F from base." << endl;
	};
	// void g() {
	// 	cout << "G from base." << endl;
	// };
	void f(int a)
	{ 
		cout << "Value of A: " << a << endl;
	};
};

class derived : public base
{
public:
	using base ::f;
	void f()
	{
		cout << "F from derived." << endl;
	};
};

int main()
{
	base b1;
	derived d1;

	b1.f();
	d1.f();
	b1.f(4);

	return 0;
};