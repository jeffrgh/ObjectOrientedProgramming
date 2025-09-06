#include <iostream>

using namespace std;

class BankAccount
{
private:
	float balance;

public:
	static float total_bal;
	void setBalance(float b)
	{
		if (b >= 0)
		{
			this->balance = b;
			this->total_bal = total_bal + b;
		}
		else
		{
			cout << "Enter a balance above 0." << endl;
		}
	};
	void getBalance()
	{
		cout << "Your total balance is: " << this->total_bal << endl;
	};
};

float BankAccount::total_bal = 0;

int main()
{
	BankAccount ba;
	int a;
	cout << "Enter your balance: ";
	cin >> a;
	ba.setBalance(a);
	ba.getBalance();

	return 0;
};