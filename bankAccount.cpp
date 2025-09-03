#include <iostream>

using namespace std;

class stateBank
{
private:
	string name;
	int account_no;
	float bal;
	// float total_bal;

public:
	static float total_bal; // declaration of static variable
	stateBank(string n, int a, float b)
	{
		this->name = n;
		this->account_no = a;
		this->bal = b;
		this->total_bal = total_bal + b;
	};
	void getDetails()
	{
		cout << "Name: " << this->name << "\nAccount Number: " << this->account_no << "\nBalance: " << this->bal << "\nTotal balance: " << total_bal << endl;
	};
	void setZero()
	{
		total_bal = 0;
	};
};

float stateBank::total_bal = 0;

int main()
{
	stateBank a1("Roxas", 69420, 1234.5678);
	a1.getDetails();
	stateBank a2("Jeffrey", 12345, 123.23);
	a2.getDetails();

	return 0;
}