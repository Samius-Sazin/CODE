#include <iostream>
#include <string.h>
using namespace std;

class student
{
    public:
    string *name = new string;

    void set_data(string name) //receiving string
    {
        *(this->name) = name;
    }

    // void print()
    // {
    //     cout << "[ Name : " << *name << " ]\n";
    // }
};

int main()
{
    student s1;
    string NAME = "Sazin";
    s1.set_data(NAME); //passing the string

    cout << "[ Name : " << *s1.name << " ]\n\n";
    //s1.print_data(); //print by calling print_data function

    student s2(s1);
    cout << "[ Name : " << *s2.name << " ]\n\n";

    //changing string 2nd index value
    (*s1.name)[2] = 'x';

    //In shallow copy this change will reflected both s1 & s2
    //as both are having same address of name
    cout << "[ Name : " << *s1.name << " ]\n\n";
    cout << "[ Name : " << *s2.name << " ]\n";

}