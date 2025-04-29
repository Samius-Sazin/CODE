#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    int roll;

    static int Exam_Time;

//to access name, rool, age we need object
//but to access Exam_Time we don't need any object
//Static Data Member have to initialize outside the class
};

// Initialize the Static Data Member
int student::Exam_Time = 2;

int main()
{
    cout << student::Exam_Time << endl;

    student s1;
    student s2;
    //This will not any error but this process is not appriciable
    //As Static Data Member does not depend on any Object.
    cout << s1.Exam_Time << endl;
    cout << s2.Exam_Time << endl;

    //Change Static data member value using object
    s1.Exam_Time = 3;

    cout << student::Exam_Time << endl;

    cout << s1.Exam_Time << endl;
    cout << s2.Exam_Time << endl;


    return 0;
}