#include <iostream>
using namespace std;

/* Create Student_info class.
   Containing name, age, roll infomation.
   All data members are Public. Accessible from anywhere

   It is parent class.
*/
class Student_info
{
public:
    string name;
    int age;
    int roll;

    void MATH()
    {
        cout << "Good at Math\n";
    }

    void PHYSICS()
    {
        cout << "Good at Physics\n";
    }

    void PRINT_DATA()
    {
        cout << "Name = " << name << endl;
        cout << "Age  = " << age << endl;
        cout << "Roll = " << roll << endl;
    }
};

/*  Create Student_result as a sub class of Student_info class
    Student_info = Parent Calss / super class
    Student_result = child class / sub class
    Inherit properties, Behaviors fromSuper class

    Access both class's data members+Functions from anywhere using child class

    syntex to inherit super class to sub class:
    Class Sub_Class_Name : Mode_Name Super_Class_Name
*/
class Student_result : public Student_info
{
public:
    int physics;
    int math;
    int chemistry;
    float avrg;

    void comment()
    {
        if (avrg >= 80.0)
        {
            cout << "Average Mark = " << avrg << endl;
            cout << "This is Good Result\n";
        }
        else
        {
            cout << "Average Mark = " << avrg << endl;
            cout << "Bad Result\n";
        }
    }

    void print_data()
    {
        //This function print information of Super Class
        PRINT_DATA();

        //print sub class's info
        cout << "\nMARKS : \n";
        cout << "Physich   = " << physics << endl;
        cout << "Chemistry = " << chemistry << endl;
        cout << "Math      = " << math << endl;
    }
};

int main()
{
    // create object of sub class & access properties,
    // behaviours of both classes using this sub class
    Student_result s1; // s1 = student 1

    // access data members of super class(Student_info)
    s1.name = "Samius Sazin";
    s1.age = 21;
    s1.roll = 1236;

    // access data members of sub class(Student_result)
    s1.physics = 97;
    s1.chemistry = 90;
    s1.math = 85;
    s1.avrg = (s1.physics + s1.math + s1.chemistry) / 3.0;

    // //call function that belongs to super class (Student_info)
    // s1.PRINT_DATA();

    //call function that belongs to sub class (Student_result)
    s1.print_data();
    s1.comment();

    s1.MATH();
    s1.PHYSICS();

    return 0;
}
/*
Name = Samius Sazin
Age  = 21
Roll = 1236

MARKS : 
Physich   = 97
Chemistry = 90
Math      = 85
Average Mark = 90.6667
This is Good Result
Good at Math
Good at Physics
*/