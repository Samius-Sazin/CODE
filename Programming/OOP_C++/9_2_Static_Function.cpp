#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    static int Exam_Time;//Static Data Member

    //Static Function
    static int Exam(bool x)
    {
        if(x)
        {
            cout << "Exam Time Increase +1hr. ";
            cout << "Total Time = " << Exam_Time+1 << endl;
        }

        if(!x)
        {
            cout <<"Exam End!! ";
            cout <<"Exam time remaining = " << Exam_Time-Exam_Time << endl;
        }
    }
};

//Initialize static Data Member
//DataType ClassName::StaticMembeerName = 3;
int student::Exam_Time = 3;

int main()
{
    student::Exam(true);

    cout << endl;

    student::Exam(false);

    return 0;
}
