#include <iostream>

using namespace std;

int main()
{
	int i = 2;
	double j = 3.5;
	int *iptr = &i;
	double *dptr = &j;
	cout << *iptr << endl;
	iptr = (int *)dptr;
	dptr = (double *)iptr;

	return 0;
};