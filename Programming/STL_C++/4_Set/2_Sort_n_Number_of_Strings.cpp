/*
INPUT:  
        Enter numb of String : 8
        abc
        mno
        abc
        def
        jkl
        abc
        mno
        ghi

OUTPUT: 
        Set Size : 5
        abc
        def
        ghi
        jkl
        mno
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter numb of String : ";
    cin >> n;
    
    set <string> s;

    //take all string nput, and insert in set
    for(int i=0; i<n; i++)
    {
        string str; cin >> str;
        s.insert(str); // all strings insert in sorted order automatically
    }

    //print the set
    cout << "Set Size : " << s.size() << endl;
    for(auto &i : s)
    {
        cout << i << endl;
    }

    return 0;
}