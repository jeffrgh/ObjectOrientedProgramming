#include <iostream>
#include "thead.h"

using namespace std;

bankAccount ::bankAccount(string name, int an)
{
	this->accountNumber = an;
	this->name = name;
	cout << "New account has been created for: " << name << endl;
};

void bankAccount ::getDetails(void)
{
	cout << "Mr/Ms." << name << "\nBalance is: " << accountNumber;
};