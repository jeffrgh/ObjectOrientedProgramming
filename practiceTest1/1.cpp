#include <iostream>

using namespace std;

class MyList
{
private:
	int n;
	int i = 0;
	int *arr;

public:
	int found = 0;

	MyList(int x)
	{
		this->n = x;
		arr = new int[n];
	};

	void appendd(int val)
	{
		arr[i] = val;
		i++;
	};

	void insert(int val, int pos)
	{
		arr[pos] = val;
	};

	void remove(int pos)
	{
		if (pos < 0 || pos >= n)
		{
			cout << "Invalid position." << endl;
			return;
		}
		for (int j = pos; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		n--;
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

	void display()
	{
		cout << "[";
		for (int a = 0; a < n; a++)
		{
			cout << arr[a];
			if (a != (n - 1))
			{
				cout << " ";
			};
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

	~MyList()
	{
		delete[] arr;
	};
};

int main()
{
	MyList a1(8);
	a1.appendd(1);
	a1.appendd(2);
	a1.appendd(3);
	a1.appendd(4);
	a1.appendd(5);
	a1.appendd(6);
	a1.appendd(7);
	a1.appendd(8);

	a1.display();
	cout << "The size of the array is: " << a1.size() << endl;
	a1.searchItem(10);
	a1.searchItem(4);
	a1.remove(2);
	a1.display();
	a1.insert(15, 3);
	a1.display();
	cout << "The size of the new array is: " << a1.size() << endl;

	return 0;
};