#include <iostream>

using namespace std;

class BankAccount
{
private:
	int accountNumber;
	float balance;

public:
	BankAccount()
	{
		this->accountNumber = 0;
		this->balance = 0;
	};
	BankAccount(int aN)
	{
		this->accountNumber = aN;
		this->balance = 0;
	};
	BankAccount(int aN, float bal)
	{
		this->accountNumber = aN;
		this->balance = bal;
	};
	void getData()
	{
		cout << "Your account number and balance is: " << accountNumber << " and " << balance << endl;
	}
};

int main()
{
	BankAccount b1, b2(1), b3(2, 1599.99);
	b1.getData();
	b2.getData();
	b3.getData();

	return 0;
}