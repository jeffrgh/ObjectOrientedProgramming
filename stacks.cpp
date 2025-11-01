#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> s1, s2;
	s1.push(1);
	s1.push(10);
	s1.push(11);
	s1.push(12);
	s1.push(13);
	s1.push(14);
	int n = s1.size();

	for (int i = 0; i < n; i++)
	{
		cout << s1.top() << endl;
		s2.push(s1.top());
		s1.pop();
	};

	cout << "Size of s1: " << s1.size() << endl;
	cout << "Size of s2: " << s2.size() << endl;
	// s2.size();

	return 0;
};