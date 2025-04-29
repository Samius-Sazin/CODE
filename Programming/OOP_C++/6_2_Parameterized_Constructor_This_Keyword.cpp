#include<iostream>
using namespace std;

class student
{
    private:
    string name;
    int age;

    //use  ' this-> 'keyword
    public:
    student(string name, int age)
    {
        //here ' this->name ' indicates to the private member 'name'
        //and ' name ' indicates to the 'name parameter' of the function  
        this -> name = name;
        this -> age = age;
    }

    // //use normal procedure
    // public:
    // student(string n, int a)
    // {
    //     name = n;
    //     age = a;
    // }

    void print_data()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    //Create object Statically
    student s1("Sami", 21);
    s1.print_data();//print data

    student s2("sam", 22);
    s2.print_data();


    //create object Dynamically
    student *s3 = new student("Sazin", 23);
    (*s3).print_data();
    s3->print_data();

    return 0;
}