#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    int roll;

    // Function that Print data member
    // It is a Public Function, Accessible from any where
    // No need to pass any data, as everything available in class
    void print_info()
    {
        cout << "Name : " << name << endl; //work as, a[0].name

        cout << "Age  : " << age << endl; //work as, [0].age

        cout << "Roll : " << roll << endl; //work as, a[0].roll
    }
};

int main()
{
    student a[3];

    for(int i=0; i<3; i++)
    {
        cout << "Enter Student " << i+1 << " Name : ";
        cin >> a[i].name;

        cout << "Enter Student " << i+1 << " Age  : ";
        cin >> a[i].age;

        cout << "Enter Student " << i+1 << " Roll : ";
        cin >> a[i].roll;

        cout << endl;
    }

    //calling print function
    for(int i=0; i<3; i++)
    {
        cout << endl;
        cout << "Student " << i+1 << " Information -> \n";
        a[i].print_info();
    }

    return 0;
}
