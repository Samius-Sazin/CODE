/*
store 3 subjects mark of 2 students
2*3(2 row, 3 column)

1st Student Mark : 90 93 91
2nd Student Mark : 85 83 87

*/

#include<iostream>
using namespace std;

int main()
{
    int marks[2][3];

    //store 1st students mark
    marks[0][0] = 90;
    marks[0][1] = 93;
    marks[0][2] = 91;
    //store 2nd students mark
    marks[1][0] = 85;
    marks[1][1] = 83;
    marks[1][2] = 87;

    //print 1st students mark
    cout<<"1st Student Mark : ";
    cout<<marks[0][0]<<" ";
    cout<<marks[0][1]<<" ";
    cout<<marks[0][2]<<" "<<endl;

    //print 2nd students mark
    cout<<"2nd Student Mark : ";
    cout<<marks[1][0]<<" ";
    cout<<marks[1][1]<<" ";
    cout<<marks[1][2]<<" "<<endl;

    return 0;
}
