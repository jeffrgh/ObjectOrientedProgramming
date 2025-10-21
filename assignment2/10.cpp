#include <iostream>

using namespace std;

class Shape
{
public:
    virtual float getArea() = 0;
};

class Circle : public Shape
{
    float r;

public:
    Circle(float x) { r = x; };
    float getArea() { return 3.14 * r * r; };
};

class Square : public Shape
{
    float s;

public:
    ;
    Square(float x) { s = x; };
    float getArea() { return s * s; };
};

int main()
{
    Shape *p;

    Circle c(5);
    Square sq(4);

    p = &c;
    cout << "Circle: " << p->getArea() << endl;

    p = &sq;
    cout << "Square: " << p->getArea() << endl;

    return 0;
}