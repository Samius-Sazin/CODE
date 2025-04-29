//Fib Numb Series - 0 1 1 2 3 5 8 13
//          index - 0 1 2 3 4 5 6 7
//What is the first 4 fib number. ANS : 0 1 1 2

#include<iostream>
using namespace std;

void fibonacci(int n)
{
    int f1 = 0;
    int f2 = 1;
    int fib;
    for(int i=0; i<n; i++)
    {
        cout<< i <<" th Position Fib = "<< f1 <<endl;
        fib = f1+f2;
        f1 = f2;
        f2 = fib;
    }
}

int main()
{
    int n;
    cout<<"Enter Position : ";
    cin>>n;
    fibonacci(n);
    return 0;
}
