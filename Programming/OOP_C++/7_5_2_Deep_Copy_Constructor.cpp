#include <iostream>
using namespace std;

class student
{
public:
    string *name = new string;

    //defult Constructor
    student()
    {
        cout << "Defult Constructor\n\n";
    }

    //Copy constructor
    student(student &temp)
    {
        string *Name = new string;
        *Name = *temp.name;
        name = Name;
    }

    //function to set data to s1
    void set_data(string name)
    {
        *(this->name) = name;
    }

    //Print data
    void print_data()
    {
        //name give access of the string address.
        //*name give access of the string
        cout << "[ Name : " << *name << " ]\n\n";
    }
};

int main()
{
    student s1;
    string NAME = "Sazin";
    s1.set_data(NAME);//passing char array to Set_data function

    s1.print_data();//print s1 data

    student s2(s1);//s2.student(s1); pass s1 to copy constructor
    s2.print_data();//print s2 data

    (*s1.name)[2] = 'x';//changing string 2nd index value

    //In Deep copy this change will not reflected in s2
    //as s1 & s2 are having different pointer pointing 2 different memory
    s1.print_data();
    s2.print_data();

    return 0;
}