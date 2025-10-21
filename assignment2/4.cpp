#include <iostream>

using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void set_person(string n, int a)
    {
        name = n;
        age = a;
    };
};

class Employee : public Person
{
protected:
    int id;

public:
    void set_id(int id)
    {
        this->id = id;
    };
};

class Manager : public Employee
{
protected:
    string dept;

public:
    void set_dept(string d)
    {
        dept = d;
    };
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee id: " << id << endl;
        cout << "Employee Department: " << dept << endl;
    };
};

int main()
{
    Manager m1;

    m1.set_person("Jeffrey", 19);

    m1.set_id(257);

    m1.set_dept("IT");

    m1.display();

    return 0;
}