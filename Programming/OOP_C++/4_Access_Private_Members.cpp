#include<iostream>
using namespace std;

class Student{
    public:
    int age;
    int roll;

    private:
    string name;

    public:
    void set_data(string n)
    {
        name = n;
    }

    public:
    void print_data()
    {
        cout << "Student Information : " << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll : " << roll << endl; 
    }
};

int main()
{
    Student s1;

    //as they are public class members, we can easily access them
    //initialize both age and roll with int values
    s1.age = 20;
    s1.roll = 36;

    //access private class member
    string n;
    cin >> n; //take a string input
    s1.set_data(n); //calling function to set the string into name member

    s1.print_data(); //function that print all data

    return 0;
}