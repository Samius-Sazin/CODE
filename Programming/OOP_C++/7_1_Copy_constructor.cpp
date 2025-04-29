#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    int roll;

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

    //Copy s1 value to s2
    student s2(s1); /*this line work like this
                      s2.name = s1.name;
                      s2.age = s1.age;
                      s2.roll = s1.roll; */ 


    cout << "Student 1 info. : \n";
    s1.print_data();

    cout << "\nStudent 2 info. : \n";
    s2.print_data();

    return 0;
}