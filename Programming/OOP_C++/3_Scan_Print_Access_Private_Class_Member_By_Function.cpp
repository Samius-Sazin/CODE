#include<iostream>
using namespace std;

class student
{
    //Private, Note accessible from outside of the class
    string name;

    public:
    //functions are public, so accessible from any where
    void input_info(string n)
    {
        name = n;
    }

    void print_info()
    {
        cout << name << endl;
    }

};

int main()
{
    student a[3];

    string n;

    //Take Input, & pass to class function
    for(int i=0; i<3; i++)
    {
        cout << "Enter Student " << i+1 << " Name : ";
        cin >> n;
        a[i].input_info(n);

        cout << endl;
    }

    //print the data by calling class function
    for(int i=0; i<3; i++)
    {
        cout << "Student " << i+1 << " Name -> ";
        a[i].print_info();
    }

    return 0;
}
