#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    int roll;
};

/* 1st way, Dereferencing & use Dot Opertor: (*s1).age = 21;
int main()
{
    //Allocate memory in heap as same size as student class
    //And s1 is pointing to heap from stack.
    //s1 holding the address of the memory that allocate in heap
    student *s1 = new student;

    //initialize
    (*s1).name = "Samius Sazin";
    (*s1).age = 21;
    (*s1).roll = 36;

    //print
    cout << (*s1).name << endl;//print name
    cout << (*s1).age << endl;//print age
    cout << (*s1).roll << endl;//print roll

    return 0;
} */

/* 2nd way, Arrow Operator: s1 -> age = 21;
int main()
{
    // Allocate memory in heap as same size as student class
    // And s1 is pointing to heap from stack.
    // s1 holding the address of the memory that allocate in heap
    student *s1 = new student;

    // initialize
    s1->name = "Samius Sazin";
    s1->age = 21;
    s1->roll = 36;

    // Print
    cout << s1->name << endl;//name
    cout << s1->age << endl;//age
    cout << s1->roll << endl;//roll

    return 0;
} */

//Apply both method.
int main()
{
    student *s1 = new student;

    //Take User input
    cout << "Enter Name : ";
    getline(cin, s1->name);
    //getline(cin, (*s1).name);

    cout << "Enter Age : ";
    cin >> s1->age;
    //cin >> (*s1).age; 

    cout << "Enter Roll : ";
    cin >> s1->roll;
    //cin >> (*s1).roll;

    cout << endl;

    //print
    cout << "Name : " << s1->name << endl;
    //cout << "Name : " << (*s1).name << endl;
    
    cout << "Age : " << s1->age << endl;
    //cout << "Age : " << (*s1).age << endl;

    cout << "Roll : " << s1->roll << endl;
    //cout << "Roll : " << (*S1).roll << endl;

    return 0;
}