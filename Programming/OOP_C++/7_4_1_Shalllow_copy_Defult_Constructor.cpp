#include <iostream>
#include <string.h>
using namespace std;

class student
{
public:
    char *name = new char[50];

    void set_data(char *name)//received the array
    {
        strcpy(this->name, name);
    }

    // void set_data(char name[])
    // {
    //     strcpy(this->name, name);
    // }

    // void print_data()
    // {
    //     cout << "[ Name : " << name << " ]\n\n";
    // }
};

int main()
{
    student s1;
    char NAME[] = "Sazin";
    s1.set_data(NAME);//passing the character array

    cout << "[ Name : " << s1.name << " ]\n\n";
    //s1.print_data(); //print by calling print_data function

    student s2(s1);
    cout << "[ Name : " << s2.name << " ]\n\n";

    //changing array 2nd index value
    s1.name[2] = 'x';
    //*(s1.name + 2) = 'x';

    //In shallow copy this change will reflected both s1 & s2
    //as both are having same address of name
    cout << "[ Name : " << s1.name << " ]\n\n";

    cout << "[ Name : " << s2.name << " ]\n";
}