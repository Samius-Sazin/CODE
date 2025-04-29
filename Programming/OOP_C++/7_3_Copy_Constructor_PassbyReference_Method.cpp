#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    int roll;

    // // copy constructor pass by address
    // student(student *temp)
    // {
    //     this->name = temp->name;
    //     this->age = temp->age;
    //     this->roll = temp->roll;
    // }

    //copy constructor pass by reference
    student(student &temp)
    {
        name = temp.name;
        age = temp.age;
        roll = temp.roll;
    }

    student(string name, int age, int roll)
    {
        this->name = name;
        this->age = age;
        this->roll = roll;
    }

    void print_data()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll : " << roll << endl;
    }
};

int main()
{
    student s1("Sami", 21, 36);
    cout << "Student 1 info. : \n";
    s1.print_data();

    student s2(s1);
    cout << "\nStudent 2 info. : \n";
    s2.print_data();

    return 0;
}