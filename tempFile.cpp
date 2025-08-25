#include<iostream>

using namespace std;

int main() {
	int a;
	cout << "What is your mark? ";
	cin >> a;

	if (a >= 90) {
		cout << "A";
	}
	else if (b >= 80 && b < 90) {
		cout << "B";
	}
	else if (c >= 70 && c < 80) {
		cout << "C";
	}
	else if (d >= 60 && d < 70) {
		cout << "D";
	}
	else {
		cout << "E";
	}

	return 0;
}