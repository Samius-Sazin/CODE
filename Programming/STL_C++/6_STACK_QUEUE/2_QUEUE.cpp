#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*We can only see/acccess the front
      element of a queue*/

    //DECLARE
    queue <int> q;

    //INITIALIZE
    q.push(2);
    q.push(4);
    q.push(9);
    q.push(6);

    // //returns boolean value
    // //Check whether a queue empty or not
    // q.empty();

    // q.front(); //returns front element
    // q.pop(); //Delete front element

    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}
/*
    2
    4
    9
    6
*/