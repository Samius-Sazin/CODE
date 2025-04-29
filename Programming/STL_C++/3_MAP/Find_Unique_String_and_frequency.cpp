/*
Given N strings. Find the unique Strings & their frequency.
N = 8
abc
fgh
ert
jkl
abc
jkl
abc
ert


abc 3
ert 2
fgh 1
jkl 2
*/

#include<bits/stdc++.h>
using namespace std;

int main() {

    //Key = string, Corresponding value integer(for frequency)
    map<string, int> m;

    cout << "Enter N : ";
    int N; cin >> N;

    for(int i=0; i<N; i++){
        string str; cin >> str;
        
        // m[str] = m[str]+1;
        m[str]++;
    }

    for(auto &i : m){
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}

/*
Expaination : m[str] = m[str]+1;

if we write just m[str] and do not assign its corresponding value
then it automatically initialize with zero(0).
So, here m[str] value is 0.

And when we write m[str]++; or m[str] = m[str] + 1;
it means we inrease/add 1 of m[str]'s corresponding value.
*/

/*
    we can also do in this way,
    
    for(int i=0; i<N; i++){
        string str; cin >> str;

        m[str];
        auto it = m.find(str);
        it->second++;
    }

*/