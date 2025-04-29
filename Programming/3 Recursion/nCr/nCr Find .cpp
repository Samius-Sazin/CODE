#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1) return 1;
    return n * fact(n-1);
}

int main()
{
    int n,r;
    cout<<"Enter Value of n & r : ";
    cin>> n >> r;

    int nCr = fact(n) / (fact(n-r) * fact(r));

    cout<< n <<"C"<< r <<" = "<< nCr <<endl;

    return 0;
}
