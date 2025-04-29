#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*We can only see/acccess the top
      element of a Stack */

    //DECLARE
    stack <int> s;

    //INITIALIZE
    s.push(2);
    s.push(4);
    s.push(9);
    s.push(6);

    // //returns boolean value
    // //Check whether a stack empty or not
    // s.empty();

    // s.top(); //returns top element
    // s.pop(); //Delete top element

    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}
/*
    6
    9
    4
    2
*/