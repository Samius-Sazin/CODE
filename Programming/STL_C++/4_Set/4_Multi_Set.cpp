#include<bits/stdc++.h>
using namespace std;

void Print_Multi_Set(multiset <string> &s);

int main(){

    //DECLARE
    multiset <string> s;

    //INITIALIZE
    s.insert("ab");
    s.insert("ef");
    s.insert("cd");
    Print_Multi_Set(s);
                    /*Multi Set Size : 3
                                       ab
                                       cd
                                       ef
                    */


    //Multiple Same value is Allowed, And all arrange in SORTED order
    s.insert("ab");
    Print_Multi_Set(s);
                    /*Multi Set Size : 3
                                       ab
                                       ab
                                       cd
                                       ef
                    */








    // FIND
    // s.find(value); returns iterator
    auto it = s.find("ab"); // it points to the fist "ab"
    cout << *it << endl; // *it = ab;









    // // ERASE Method 1:
    // // s.erase(it); delet the valu that pointed by iterator it.
    // s.erase(it);
    // Print_Multi_Set(s);
                    /*Multi Set Size : 3
                                       ab
                                       cd
                                       ef
                    */


    // ERASE Method 2:
    // s.erase(value); delete all similar values from set
    s.erase("ab");
    Print_Multi_Set(s);
                    /*Multi Set Size : 3
                                       cd
                                       ef
                    */
}



//Function that print he Multi Set
void Print_Multi_Set(multiset <string> &s){
    cout << "Multi Set Size : " << s.size() << endl;

    for(auto &i : s){
        cout << i << endl; 
    }

    cout << endl;
}