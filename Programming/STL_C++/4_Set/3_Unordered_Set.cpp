/*
Given N number of Strings.
Then take a string input and check
whether it is available in the String List


Enter value of N : 6
Enter N number of Stirngs : 
                            abc
                            def
                            ghi
                            jkl
                            mno
                            pqr
Enter a Stirng to check : ab
ab is not available in String List

Enter a Stirng to check : abc
ab is available in String List
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter value of N : ";
    cin >> n;

    // Declare an unordered set
    // Find, Insert, Erase --> O(1) complexity
    unordered_set <string> s;

    // Taking N number of string input
    cout << "Enter N number of Stirngs : \n";
    while(n--){
        string str; cin >> str;
        s.insert(str);
    }

    //Checking
    cout << "Enter a Stirng to check : ";
    string str; cin >> str;

    if(s.find(str) == s.end()){
        cout << str << " is not available in String List\n";
    }

    else{
        cout << str << " is available in String List\n";
    }
}