#include <iostream>

using namespace std;

class A
{
	// Shallow copy
public:
	int *data;
	A(int a)
	{
		data = new int(a);
	};

	// A(const A &others) // Default copy constructor -> Shallow copy constructor
	// {
	// 	data = new int(*others.data);
	// };

	void getDetails()
	{
		cout << "Address is: " << data << endl;
	};

	~A()
	{
		delete data;
	};
};

class B
{
	// Deep Copy
public:
	int *data;
	B(int b)
	{
		data = new int(b);
	};

	B(const B &others)
	{
		data = new int(*others.data);
	};

	void getDetails()
	{
		cout << "Address is: " << data << endl;
	};

	~B()
	{
		delete data;
	};
};

int main()
{
	A a1(5);
	a1.getDetails();

	A a2 = a1;
	a2.getDetails();

	B b1(5);
	b1.getDetails();

	B b2 = b1;
	b2.getDetails();

	return 0;
};