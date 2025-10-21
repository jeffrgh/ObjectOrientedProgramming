#include <iostream>

using namespace std;

class class1
{
private:
	int a;

public:
	class1(int a1)
	{
		this->a = a1;
	};

	friend void printC(class class1 c1, class class2 c2);
	friend void swapC(class class1 *c1, class class2 *c2);
};

class class2
{
private:
	int a;

public:
	class2(int a1)
	{
		this->a = a1;
	};

	friend void printC(class class1 c1, class class2 c2);
	friend void swapC(class class1 *c1, class class2 *c2);
};

void printC(class class1 c1, class class2 c2)
{
	cout << "Class 1: " << c1.a << "\nClass 2: " << c2.a << endl;
};

void swapC(class class1 *c1, class class2 *c2)
{
	int temp = c1->a;
	c1->a = c2->a;
	c2->a = temp;
};

int main()
{
	class1 objA(10);
	class2 objB(20);

	cout << "Before swap:" << endl;
	printC(objA, objB);

	swapC(&objA, &objB);

	cout << "After swap:" << endl;
	printC(objA, objB);

	return 0;
};