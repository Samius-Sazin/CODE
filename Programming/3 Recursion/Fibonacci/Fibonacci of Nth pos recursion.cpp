//Fib Numb Series - 0 1 1 2 3 5 8 13
//          index - 0 1 2 3 4 5 6 7
//What is the 6 position Fibonacci Number? ans = 8

#include<iostream>
using namespace std;

int fibo(int n)
{
    int f1, f2;
    if(n==0 || n==1) return n;
    f1 = fibo(n-1);
    f2 = fibo(n-2);
    return f1+f2;
}

int main()
{
    int n, res;
    cout<<"Enter Position : ";
    cin>>n;
    res = fibo(n);
    cout<<n<<"th Position Fib Number : "<<res<<endl;
    return 0;
}

