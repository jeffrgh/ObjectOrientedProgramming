#include <iostream>

using namespace std;

template <class T, int size>
T arrmaximum(T x[size])
{
	T y = x[0];
	for (int i = 1; i <= size; i++)
	{
		if (x[i] > y)
		{
			y = x[i];
		};
	};
	return y;
};

int main()
{
	int arr[7] = {43, 5, 4, 35, 63, 535, 5432};
	int c = arrmaximum<int, 7>(arr);

	cout << "The maximum value in the array is: " << c << endl;

	return 0;
};