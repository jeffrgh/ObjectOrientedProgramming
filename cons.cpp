#include <iostream>

using namespace std;

class bankAccount
{
private:
	string name;
	float bal;

public:
	void setVal(string n, float b)
	{
		this->name = n;
		this->bal = b;
	};
	void getVal()
	{
		cout << "Name: " << this->name << "\n"
			 << "Balance: " << this->bal << endl;
	};
	void deposit(float n1)
	{
		this->bal = this->bal + n1;
	};
	void withdraw(float n1)
	{
		if (this->bal > n1)
		{
			this->bal = this->bal - n1;
		}
		else
		{
			cout << "Not enough balance" << endl;
		}
	};
	bankAccount()
	{
		cout << "Hi" << endl;
	};
};

int main()
{
	bankAccount a1;
	bankAccount a2;
	a1.setVal("Roxas", 1920.1080);
	a2.setVal("Jeffrey", 2450.1200);
	a1.getVal();
	a2.getVal();
	a1.deposit(5100);
	a2.deposit(1991);
	a1.getVal();
	a2.getVal();
	a1.withdraw(10000);
	a2.withdraw(900);
	a1.getVal();
	a2.getVal();
	return 0;
}