#include <iostream>
#include <cmath>

using namespace std;

// int sqrt(int n)
// {
// 	return n * n;
// };

namespace mylib
{
	int sqrt(int n)
	{
		return n * n * n;
	};
};

using namespace mylib;

int main()
{
	int a = 9;
	int b = sqrt(a);
	cout << "The square of a is: " << b << endl;

	return 0;
};