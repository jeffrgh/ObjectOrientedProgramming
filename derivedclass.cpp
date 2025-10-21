#include <iostream>

using namespace std;

class uni
{
public:
	virtual void display() // if we use keyword virtual it calls the method where the pointer is pointing.
	// void display()
	{
		cout << "Welcome from class university. BASE" << endl;
	};
};

class student : public uni
{
public:
	void display()
	{
		cout << "Welcome from class student. DERIVED" << endl;
	};
};

int main()
{
	uni *o1;
	uni ob;
	o1 = &ob;
	o1->display();
	student *s1;
	student sb1;
	s1 = &sb1;
	s1->display();
	s1 = (student *)o1; // s1(derived) -> o1(base)
	// o1 = (uni *)s1;
	// READ ABOUT STATIC, DYNAMIC BINDING.
	// ALSO READ ABOUT UPcasting and DOWNcasting.
	// o1 = s1; // UPcasting // dynamic binding
	s1->display();
	o1->display();
	ob.display();  // static binding
	sb1.display(); // static binding

	return 0;
};