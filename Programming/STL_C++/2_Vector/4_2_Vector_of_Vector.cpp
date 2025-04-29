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
        cout << "Enter Size of v[" << i << "] Vector : ";
        int vi; cin >> vi;

        v.push_back(vector<int>());//PushBack an empty vector
        
        cout << "Enter Value of Vector : ";
        for(int j=0; j<vi; j++) {

            int val; cin>> val;
            v[i].push_back(val);
        }
    }


    for(int i=0; i<v.size(); i++) {
        cout << "v[" << i << "] Vector ";
        print_vector(v[i]);
    }

    return 0;
}

/*
Enter an Integer for v Vector size : 3

Enter Size of v[0] Vector : 3
Enter Value of Vector : 1 2 3

Enter Size of v[1] Vector : 2 
Enter Value of Vector : 4 5

Enter Size of v[2] Vector : 5
Enter Value of Vector : 1 3 5 7 2

v[0] Vector Size : 3 || 1 2 3
v[1] Vector Size : 2 || 4 5
v[2] Vector Size : 5 || 1 3 5 7 2

 */