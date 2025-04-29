#include <iostream>
using namespace std;

// Parent Class of INFO class
class student
{
public:
    void print_data()
    {
        cout << "Data of Students.\n";
    }
};

// Parent Class of INFO class
class teacher
{
public:
    void print_data()
    {
        cout << "Data of Teachers.\n";
    }
};

// Child class of teacher & student class
class INFO : public student, public teacher
{
public:
    void abcd()
    {
        cout << "\nMultiple Inheritance.\n\n";
    }
};

int main()
{
    // Create obj of student class
    student s;
    s.print_data();

    // crete obj of teacher class
    teacher T;
    T.print_data();

    // create obj of INFO class
    INFO i;
    i.abcd();

    // i.print_data(); error
    // because print_data(); function exists in 2 classes.
    // we have to clearify which class we want.
    // syntex --
    // ObjName.ClassName::Member/FunctionName;
    i.student::print_data();
    i.teacher::print_data();

    return 0;
}