#include<iostream>
using namespace std;

class student
{
    public:
    // string name;
    // int age;
    // int roll;

    //Destructor
    ~student()
    {
        cout << "Destructor Called\n";
    }
};

int main()
{
    //statically create object
    //Static object automatic call destructor
    student s1;

    //Dynamically create Object
    //Call destructor manually
    student *s2 = new student;
    delete s2;

    return 0;
}