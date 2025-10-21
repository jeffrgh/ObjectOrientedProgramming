#include <iostream>

using namespace std;

class vector;
class matrix;

class matrix
{
private:
	int arr[2][2];

public:
	matrix(int a, int b, int c, int d)
	{
		this->arr[0][0] = a;
		this->arr[0][1] = b;
		this->arr[1][0] = c;
		this->arr[1][1] = d;
	};

	void getMatrix()
	{
		cout << "The matrix is:\n"
			 << arr[0][0] << " " << arr[0][1] << "\n"
			 << arr[1][0] << " " << arr[1][1] << endl;
	};

	friend vector vectorMatrix(vector *v, matrix *m);
};

class vector
{
private:
	int arr1[2];

public:
	vector(int a, int b)
	{
		this->arr1[0] = a;
		this->arr1[1] = b;
	};

	void getVector()
	{
		cout << "The vector is: " << arr1[0] << " - " << arr1[1] << endl;
	};

	friend vector vectorMatrix(vector *v, matrix *m);
};

// non member function, i.e. a normal function
vector vectorMatrix(vector *v1, matrix *m1)
{
	vector v2(0, 0);
	v2.arr1[0] = m1->arr[0][0] * v1->arr1[0] + m1->arr[0][1] * v1->arr1[1];
	v2.arr1[1] = m1->arr[1][0] * v1->arr1[0] + m1->arr[1][1] * v1->arr1[1];

	return v2;
};

int main()
{
	matrix m1(1, 2, 3, 4);
	m1.getMatrix();
	vector v1(2, 8), v3(0, 0);
	v1.getVector();

	v3 = vectorMatrix(&v1, &m1);
	v3.getVector();

	return 0;
};