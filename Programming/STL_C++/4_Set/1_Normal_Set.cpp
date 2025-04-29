#include<bits/stdc++.h>
using namespace std;

void print_set(set<string> &s);

int main(){
    // DECLARE
    set <string> s;
    
    //INITIALIZE
    s.insert("abc");
    s.insert("def");
    s.insert("ghi");

    print_set(s);
                    /*
                        Set Size : 3
                        abc
                        def
                        ghi
                    */

   //inserting same value will not change in set
   s.insert("abc");
   print_set(s);
                    /*
                        Set Size : 3
                        abc
                        def
                        ghi
                    */









    // FIND
    // Returns an iterator

    // If key is not available in SET, it = s.end();
    // try to avoid it=s.end();  sigmentation fault can be seen for this

    auto it = s.find("abc");
    cout << *it << endl; // it = abc;
                        
    // it = s.find("ab");
    // cout << "it = " << *it << endl;
    //                             /*
    //                                 it = 'nothing'
    //                                 as "ab" is not available in set
    //                             */







    
    // ERASE
    // s.erase(key / iterator);
    // If key is not available in SET, then shows an error

    //s.erase("def");
    auto It = s.find("def");
    s.erase(It);
    print_set(s);
                    /*
                        Set Size : 2
                        abc
                        ghi
                    */

    return 0;
}


void print_set(set<string> &s){
    cout << "Set Size : " << s.size() << endl;
    
    for(auto &i : s){
        cout << i << endl;
    }

    cout << endl;
}