/*
Name : Sami

Age : 21
Roll : 36

Name : Sazin
Age : 21
Roll : 36
*/
#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    int roll;

    student(string name)
    {
        this->name = name;
    }

    student(int age, int roll)
    {
        this->age = age;
        this->roll = roll;
    }

    student(string name, int age, int roll)
    {
        this->name = name;
        this->age = age;
        this->roll = roll;
    }
};

int main()
{
    student *s1 = new student("Sami");
    cout << "Name : " << (*s1).name << endl << endl;
    // cout << "Name : " << s1->name << endl;

    student s2(21, 36);
    cout << "Age : " << s2.age << endl;
    cout << "Roll : " << s2.roll << endl << endl;

    student s3("Sazin", 21, 36);
    cout << "Name : " << s3.name << endl;
    cout << "Age : " << s3.age << endl;
    cout << "Roll : " << s3.roll << endl;

    return 0;
}