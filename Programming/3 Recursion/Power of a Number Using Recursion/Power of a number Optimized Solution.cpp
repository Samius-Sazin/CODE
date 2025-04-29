// Power of a Number Optimized Method

#include<iostream>
using namespace std;

int Optimized_Power(int a, int n)
{
    int res;
    if(n == 0) return 1;
    res = Optimized_Power(a, n/2);

    if(n%2 == 0) return res*res; //if n is even then execute this line

    return a*res*res; //if n is Odd then execute this line

}

int main()
{
    int a, n;
    cout<<"X^n --> Enter value of X & n : ";
    cin>>a>>n;
    int res = Optimized_Power(a, n);
    cout<<a<<"^"<<n<<" = "<<res<<endl;
    return 0;
}

