#include<bits/stdc++.h>
using namespace std;

//void print_map(map<int, string> m){
void print_map(auto m){
    cout << "Map Size : " << m.size() << endl;

    for(auto &i : m){
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;
}


int main(){

    map<int, string> m;
    m[1] = "abc";
    m[5] = "def";
    m[3] = "ghi";

    print_map(m);
            // Map Size : 3
            // 1 abc
            // 3 ghi
            // 5 def





    //find function, it returns a iterator
    //note: if m.find(7), here 7 is not in map so, it = m.end();

    auto it = m.find(3); //Key & Corresponding value : 3 ghi

    cout << "Key & Corresponding value : " << it->first << " " << it->second << endl;







    //erase function
    // //type 1, pass key value
    // m.erase(3); //3 ghi, is deleted

    //type 2, pass iterator
    auto i = m.find(3);
    m.erase(i); //3 ghi, is deleted
    //note: if m.erase(7), here 7 is not in map so it show an error
    print_map(m);

                // Map Size : 2
                // 1 abc
                // 5 def






    m.clear();// Delete whole map
    print_map(m); // Map Size : 0

}

/*
Map Size : 3
1 abc
3 ghi
5 def

Key & Corresponding value : 3 ghi
Map Size : 2
1 abc
5 def

Map Size : 0
*/