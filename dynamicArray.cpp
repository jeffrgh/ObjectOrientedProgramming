#include <iostream>

using namespace std;

class arrayDyn
{
private:
	int x;
	int *arr;

public:
	arrayDyn(int size)
	{
		this->x = size;
		arr = new int[x];
	};
	void input()
	{
		cout << "Enter " << x << " elements: ";
		for (int i = 0; i < x; i++)
		{
			cin >> arr[i];
		};
	};

	void square()
	{
		int sum = 0;
		for (int i = 0; i < x; i++)
		{
			sum = arr[i] * arr[i];
		};
		cout << "The sum of squares is: " << sum << endl;
	};
	~arrayDyn()
	{
		cout << "Array destroyed." << endl;
	};
};

int main()
{
	int size;
	cout << "Enter the size of array: ";
	cin >> size;
	arrayDyn a(size);
	a.input();
	a.square();

	return 0;
};