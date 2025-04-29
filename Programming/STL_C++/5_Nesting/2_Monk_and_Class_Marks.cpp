/*
input:
        4
        sami 90
        sazin 99
        samia 85
        sami 85

output :
        sazin 99
        sami 90
        sami 85
        samia 85
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, multiset<string>> m;

    int n; cin >> n;

//Taking input
    for(int i=0; i<n; i++){
        string name; cin >> name;
        int marks; cin >> marks;
        m[marks * (-1)].insert(name);
    }


//print output
    for(auto &map : m){
        for(auto &set : map.second){
            cout << set << " " << abs(map.first) << endl;
        }
    }
}