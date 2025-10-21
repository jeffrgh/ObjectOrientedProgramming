#include <iostream>

using namespace std;

class bankAccount
{
private:
	string name;
	int accountNumber;

public:
	bankAccount(string name, int an);

	void getDetails(void);
};