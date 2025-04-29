#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int>v) {
    cout << "Size : " << v.size() << " || ";

    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;
}


int main(){
    cout << "Enter Size of Vector Array : ";
    int n; cin >> n;

    vector<int>v[n];

    for(int i=0; i<n; i++){
        cout << "Enter Size of v[" << i << "] Vector : ";
        int x; cin >> x;

        cout << "Enter Value of Vector : ";
        for(int j=0; j<x; j++){
            int val; cin >> val;
            v[i].push_back(val);
        }
    }

    cout << v[0][0] << endl;

    //print
    for(int i=0; i<n; i++) {
        cout << "v[" << i << "] Vector ";
        print_vector(v[i]);
    }

    return 0;
}

/*

Enter Size of Vector Array : 3

Enter Size of v[0] Vector : 5
Enter Value of Vector : 1 2 3 4 5

Enter Size of v[1] Vector : 4
Enter Value of Vector : 6 7 8 9

Enter Size of v[2] Vector : 7
Enter Value of Vector : 1 2 3 4 5 6 7

v[0] Vector Size : 5 || 1 2 3 4 5 
v[1] Vector Size : 4 || 6 7 8 9 
v[2] Vector Size : 7 || 1 2 3 4 5 6 7

*/