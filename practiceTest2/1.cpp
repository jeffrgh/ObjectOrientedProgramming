#include <iostream>

using namespace std;

class list
{
private:
	int n;
	int i = 0;
	int *arr = new int[n];

public:
	list(int a)
	{
		this->n = a;
		arr = new int[n];
	};

	void add(int val)
	{
		arr[i] = val;
		i++;
	};

	void remove(int index)
	{
		if (index < 0 || index >= n)
		{
			cout << "Invalid index." << endl;
			return;
		}
		for (int j = index; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		n--;
		i--;
	};

	void display()
	{
		cout << "[";
		for (int j = 0; j < n; j++)
		{
			cout << arr[j] << " ";
		};
		cout << "]" << endl;
	};

	int size()
	{
		int sz = 0;
		for (int a = 0; a < n; a++)
		{
			sz++;
		};
		return sz;
	};

	~list()
	{
		delete[] arr;
	};
};

int main()
{
	list a1(8);
	a1.add(1);
	a1.add(2);
	a1.add(3);
	a1.add(4);
	a1.add(5);
	a1.add(6);
	a1.add(7);
	a1.add(8);

	a1.display();
	cout << "The size of the array is: " << a1.size() << endl;
	a1.remove(2);
	a1.display();
	cout << "The size of the new array is: " << a1.size() << endl;

	return 0;
};