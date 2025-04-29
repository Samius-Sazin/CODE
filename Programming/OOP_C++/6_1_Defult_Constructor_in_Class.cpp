#include <iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    int roll;

    //defult constructor, no return type, no input parameter
    student()
    {
        cout << "Defult Constructor\n" << endl;
    }
};

int main()
{
    //create object Statically
    //behind the scene(BTS) work as: s1.student();
    student s1;   

    // //create object dynamically
    // //BTS work as: (*s1).student(); s1->student();
    // student *s1 = new student;
}