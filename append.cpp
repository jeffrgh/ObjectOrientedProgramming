#include <iostream>

using namespace std;

class myArray
{
private:
	int n;
	int i = 0;
	// int *arr = new int[n];
	int *arr;

	void detailOfArray()
	{
		cout << "Size of the array is: " << n << endl;
	};

public:
	int found = 0;

	myArray(int a)
	{
		this->n = a;
		arr = new int[n];
	};

	void appendd(int val)
	{
		arr[i] = val;
		i++;
	};

	void getDetails()
	{
		cout << "[";
		for (int j = 0; j < i; j++)
		{
			cout << arr[j] << " ";
		};
		cout << "]" << endl;
	};

	void searchItem(int x)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == x)
			{
				found = 1;
				cout << "Found element: " << arr[j] << endl;
				break;
			}
			else
			{
				continue;
			};
		};
		if (found == 0)
		{
			cout << "Element " << x << " not found in list." << endl;
		};
		found = 0;
	};

	~myArray()
	{
		delete[] arr;
	};
};

int main()
{
	myArray a1(4);
	a1.appendd(1);
	a1.appendd(2);
	a1.appendd(3);
	a1.appendd(4);

	a1.getDetails();

	a1.searchItem(3);
	a1.searchItem(5);

	return 0;
};