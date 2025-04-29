// Power of a Number

#include<iostream>
using namespace std;

int Power(int a, int n)
{
    if(n == 1) return a; //if(n == 0) return 1;
    int res = a * Power(a, n-1);//return a * Power(a, n-1);
    return res;
}

int main()
{
    int a, n;
    cout<<"X^n --> Enter value of X & n : ";
    cin>>a>>n;
    int res = Power(a, n);
    cout<<a<<"^"<<n<<" = "<<res<<endl;
    return 0;
}

