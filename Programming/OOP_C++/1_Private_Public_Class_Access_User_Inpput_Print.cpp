#include<iostream>
using namespace std;

/* data members in this class is private
class student
{
    string name;
    int age;
    int roll;
}; */

/* age, roll are public. name is private
class student
{
    string name;

    public:

    int age;
    int roll;
}; */

//data members in this class is public
class student
{
public:
    string name;
    int age;
    int roll;
};

/* One way to access class
int main()
{
    student a;

    a.name = "sami";
    a.age = 21;
    a.roll = 36;

    cout << a.name << endl;
    cout << a.age << endl;
    cout << a.roll << endl;

    return 0;
} */

/* TAKE INPUT FROM USER
int main()
{
    student a;

    cin >> a.name >> a.age >> a.roll;

    cout << a.name << endl;
    cout << a.age << endl;
    cout << a.roll << endl;

    return 0;
} */

int main()
{
    student a[3];

    //User Input
    for(int i=0; i<3; i++)
    {
        cout << "Enter Student " << i+1 << " Name : ";
        cin >> a[i].name; //a[0].name;

        cout << "Enter Student " << i+1 << " Age  : ";
        cin >> a[i].age; //a[0].age;

        cout << "Enter Student " << i+1 << " Roll : ";
        cin >> a[i].roll; //a[0].roll;

        cout << endl;
    }

    //Print
    for(int i=0; i<3; i++)
    {
        cout << endl;
        cout << "Student " << i+1 << " Name  : " << a[i].name << endl;

        cout << "Student " << i+1 << " Age   : " << a[i].age << endl;

        cout << "Student " << i+1 << " Roll  : " << a[i].roll << endl;
    }

    return 0;
}
