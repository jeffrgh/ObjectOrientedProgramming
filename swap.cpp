#include <iostream>

using namespace std;

template <class T>
T sWap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;

	return a, b;
};

int main()
{
	int a = 5, b = 6;
	cout << "Inital values: ";
	cout << "A: " << a << "\nB: " << b << endl;
	float a1 = 3.5, b1 = 5.6;
	cout << "Inital values: ";
	cout << "A: " << a1 << "\nB: " << b1 << endl;
	string s1("Roxas"), s2("Jeffrey");
	cout << "Inital values: ";
	cout << "A: " << s1 << "\nB: " << s2 << endl;

	sWap<int>(a, b);
	cout << "Final values: ";
	cout << "A: " << a << "\nB: " << b << endl;
	sWap<float>(a1, b1);
	cout << "Final values: ";
	cout << "A: " << a1 << "\nB: " << b1 << endl;
	sWap<string>(s1, s2);
	cout << "Final values: ";
	cout << "A: " << s1 << "\nB: " << s2 << endl;

	return 0;
};