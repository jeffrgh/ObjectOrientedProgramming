#include <iostream>

using namespace std;

namespace mythings
{
	int uv;

	void greet()
	{
		cout << "Good morning." << endl;
	};

	class simple
	{
		int a;

	public:
		simple(int n)
		{
			this->a = n;
		};

		void getVal()
		{
			cout << "The value of A is: " << a << endl;
		};
	};
};

int main()
{
	mythings ::uv = 10;
	cout << "Value of UV is: " << mythings ::uv << endl;

	mythings ::greet();

	mythings ::simple s(6);
	s.getVal();

	return 0;
};