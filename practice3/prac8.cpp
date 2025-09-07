#include <iostream>

using namespace std;

class Account
{
private:
	int accountNumber;
	float balance;

public:
	void set(int a, float b)
	{
		this->accountNumber = a;
		this->balance = b;
	};
	void get()
	{
		cout << "Your account number and balance is: " << this->accountNumber << " and " << this->balance << endl;
	};
};

int main()
{
	Account a1, a2, a3;
	a1.set(1, 14.5);
	a2.set(2, 15.4);
	a3.set(3, 18.3);

	a1.get();
	a2.get();
	a3.get();

	return 0;
}