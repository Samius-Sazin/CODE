#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> v) {
    cout << "Size : " << v.size() << " || ";

    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;
}

//same as array of vector
int main() {
    cout << "Enter an Integer for v Vector size : ";
    int n; cin >> n;
     
    vector<vector<int>> v;

    for(int i=0; i<n; i++) {
        cout << "Enter Size temp Vector : ";
        int vi; cin >> vi;

        vector<int>temp;

        cout << "Enter Value of temp Vector : ";
        for(int j=0; j<vi; j++) {

            int val; cin>> val;
            temp.push_back(val);
        }
        v.push_back(temp);
    }

    for(int i=0; i<v.size(); i++) {
        cout << "v[" << i << "] Vector ";
        print_vector(v[i]);
    }

    return 0;
}

/*
Enter an Integer for v Vector size : 3

Enter Size temp Vector : 5
Enter Value of temp Vector : 1 2 3 4 5

Enter Size temp Vector : 3
Enter Value of temp Vector : 6 7 8

Enter Size temp Vector : 2
Enter Value of temp Vector : 9 11

v[0] Vector Size : 5 || 1 2 3 4 5 
v[1] Vector Size : 3 || 6 7 8 
v[2] Vector Size : 2 || 9 11 */