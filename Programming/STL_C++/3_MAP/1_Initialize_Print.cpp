#include<bits/stdc++.h>
using namespace std;
int main(){
    //Declare
    map<int, string> m;

    //Initialize
    m[1] = "ab";
    m[5] = "cd";

    m.insert({3, "ef"});

    m.insert(make_pair(7, "gh"));




    ///Print map
    //in map we cant use normal for loop

    //use iterator way
    map<int, string>::iterator it;
    for(it=m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << it->second << endl;
    }

    //iterator way, use auto keyword
    auto iit = m.begin();
    for(iit=m.begin(); iit != m.end(); iit++){
    cout << (*it).first << " " << it->second << endl;
    }


    //Another approach, for each loop
    for(pair<const int, string> &i: m){
        cout << i.first << " " << i.second << endl;
    }


    //Another Approch, for each Loop with auto keyword
    for(auto &i : m){
        cout << i.first << " " << i.second << endl;
    }









    /*  1 ab
        3 ef
        5 cd
        7 gh    */

    m[5] = "xx";//change key 5's corresponding value

    /*  1 ab
        3 ef
        5 xx
        7 gh    */

    return 0;
}