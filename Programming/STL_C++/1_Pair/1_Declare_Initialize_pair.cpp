#include<iostream>
using namespace std;

int main()
{
    //declare & initialize
    pair<int, string> p;
    p = {5, "abc"};
    
    cout << "P values : ";
    cout << p.first << " ";
    cout << p.second << endl;



    //Another way
    pair<int, string> q;
    q = make_pair(2, "sami");

    cout << "q values : ";
    cout << q.first << " ";
    cout << q.second << endl;



    // //User Input
    // pair<int, string> r;
    // cin >> r.first >> r.second;
    // cout << r.first << " " << r.second << endl;



    //Copy pair, Pass by value
    pair<int, string> s;
    s = p;
    cout << "s values : ";
    cout << s.first << " " << s.second << endl;



    //copy pair, pass by reference
    pair<int, string> &t = p;
    t.first = 10;
    cout << "p values : ";
    cout << p.first << " " << p.second << endl;

    return 0;
}