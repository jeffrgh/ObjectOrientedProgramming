#include <iostream>

using namespace std;

template <class T>
T Maximum(T x, T y)
{
	return x > y ? x : y;
};

int main()
{
	float a = 5.5, b = 8, c = Maximum<float>(a, b);

	cout << "The maximum between " << a << " and " << b << " is: " << c << endl;

	int a1 = 7.5, b1 = 5, c1 = Maximum<int>(a1, b1);

	cout << "The maximum between " << a1 << " and " << b1 << " is: " << c1 << endl;

	return 0;
};