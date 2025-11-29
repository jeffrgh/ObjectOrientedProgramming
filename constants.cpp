#include <iostream>

using namespace std;

class A
{
private:
	const int a;
	int b;

public:
	A(int a, int b) : a(a), b(b) {
						  // this->a = a;
						  // this->b = b;
					  };

	void get_values()
	{
		cout << "Value of A is: " << a << endl;
		cout << "Value of B is: " << b << endl;
	};
};

int main()
{
	A a(5, 6);
	a.get_values();

	return 0;
};