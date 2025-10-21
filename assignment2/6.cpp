#include <iostream>

using namespace std;

class Student;

class Sport
{
private:
    int sports_grade;

public:
    void set_grade(int sg)
    {
        this->sports_grade = sg;
    };
    friend void show(Student, Sport);
};

class Student
{
private:
    int marks;

public:
    void set_marks(int m)
    {
        this->marks = m;
    };
    friend void show(Student, Sport);
};

void show(Student s, Sport sp)
{
    cout << "Marks: " << s.marks << endl;
    cout << "Sports: " << sp.sports_grade << endl;
    cout << "Total: " << s.marks + sp.sports_grade << endl;
}

int main()
{
    Student s1;
    Sport sp1;

    s1.set_marks(100);
    sp1.set_grade(41);

    show(s1, sp1);

    return 0;
}