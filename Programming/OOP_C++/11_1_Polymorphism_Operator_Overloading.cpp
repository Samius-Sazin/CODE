/*
this->n indicates S1 : 4
temp.n  indicates s2 : 7
this->n * temp.n = 28
*/

#include<iostream>
using namespace std;

class student
{
    public:
    int n;

    /*
    s1+s2;
    function called by s1 object & pass s2 as a parameter
    */
    void operator+(student &temp)
    {
        cout << "this->n indicates S1 : " << this->n << endl;
        cout << "temp.n  indicates s2 : " << temp.n << endl;
        cout << "this->n * temp.n = " << this->n * temp.n << endl;
    }

    //without parameterized function
    void operator-()
    {
        cout << "- operator overload function called by s1 object. s1 = " << this->n << endl;
    }
    void operator()()
    {
        cout << "() operator overload function called by s2 object. s2 = " << this->n << endl;
    }
};

int main()
{
    //create two object of student class
    student s1, s2;

    s1.n = 4;
    s2.n = 7;

    //s1+s2; function called by s1, S2 object pass to the function as parameter
    //both are correct
    s1 + s2;
    //s1.operator+(s2);

    //s1-; not correct
    s1.operator-();
    
    //Both are correct
    //s2();
    s2.operator()();

    return 0;
}