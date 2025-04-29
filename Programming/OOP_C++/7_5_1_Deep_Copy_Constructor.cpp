#include <iostream>
#include <string.h>
using namespace std;

class student
{
public:
    char *name = new char[50];

    //defult constructor
    student()
    {
        cout << "Defult Constructor" << endl << endl;
    }

    //receive character array
    void set_data(char *name)
    {
        this->name = name;
    }

    //User defined copy constructor
    student(student &temp)
    {
        char *Name = new char[strlen(temp.name) + 1];
        strcpy(Name, temp.name);
        name = Name;
    }

    //Print Data
    void print_data()
    {
        cout << "[ Name : " << name << " ]\n\n";
    }
};

int main()
{
    student s1;
    char NAME[] = "Sazin";
    s1.set_data(NAME);//passing char array to Set_data function
    
    s1.print_data();//print s1 data

    student s2(s1);//s2.student(s1); pass s1 to copy constructor
    s2.print_data();//print s2 data

    s1.name[2] ='x';//changing string 2nd index value

    //In Deep copy this change will not reflected in s2
    //as s1 & s2 are having different pointer pointing 2 different memory
    s1.print_data();
    s2.print_data();

    return 0;
}