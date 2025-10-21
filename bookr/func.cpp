#include <iostream>
#include <string>
#include "head.h"

using namespace std;

books ::books(string name, int id)
{
	this->name = name;
	this->id = id;
}

void books ::getDetails()
{
	cout << "Name of the book: " << this->name << " and the ID is: " << this->id << endl;
}
