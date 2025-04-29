#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v(5, 3); //3,3,3,3,3

    //Print v, Here i receive a copy of v Vector
    // So it's pass by value
    cout << "print v pass by value : ";
    for(int i: v) {
        cout << i << " ";
    }
    cout << endl;

    //print v, here i pointing to the vector
    //i doesn't receive the copy of v
    //so it's pass by reference
    cout << "Print v pass by Reference : ";
    for(int &i: v) {
        cout << i << " ";
    }
    cout << endl;







    //printing pair vector
    vector<pair<int, int>> vp = {{1,2}, {3,4}, {5,6}};//vp vector size = 3
    vp.push_back({99, 88});// now size = 4

    //print vp pair, apply pass by reference
    cout << "vp pair using pass by reference & use auto keyword : " << endl;

    for(pair<int, int> &i: vp) {
        cout << i.first << " " << i.second << endl;
    }


    //auto keyword automatically identify the datatype
    //print vp pair, apply pass by reference & use auto Keyword
    cout << "vp pair using pass by reference : " << endl;

    for(auto &i: vp) {
        cout << i.first << " " << i.second << endl;
    }
          /* 1 2
         3 4
         5 6
         99 88  */

    return 0;
}

/*
print v pass by value : 3 3 3 3 3 
Print v pass by Reference : 3 3 3 3 3 

vp pair using pass by reference :   1 2
                                    3 4
                                    5 6
                                    99 88

*/