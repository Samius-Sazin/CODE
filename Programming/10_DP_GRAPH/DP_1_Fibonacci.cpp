#include<bits/stdc++.h>
using namespace std;

int fibonacciUsingDP(int n){
    int arr[n+1];
    arr[0] = 0;
    arr[1] = 1;

    for(int i=2; i<=n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    return arr[n];
}

int main(){
    cout << "Enter a number : ";
    int n; cin >> n;
    cout << "Fibonacci of " << n << "th position is : " << fibonacciUsingDP(n);
}