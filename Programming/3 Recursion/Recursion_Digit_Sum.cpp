/*
n = 1234
digit sum = 1+2+3+4 = 10
*/

#include<bits/stdc++.h>
using namespace std;

int digitSum(int n){
    if(n == 0) return 0;
    return digitSum(n/10) + n%10;
}

int main(){
    while(1){
        cout << "Enter a Number : ";
        int n; cin >> n;
        cout << "Digit Sum : " << digitSum(n) << endl;
    }
}