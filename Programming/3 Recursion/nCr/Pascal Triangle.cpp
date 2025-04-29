/*
Pascal Triangle :

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

r0: 0C0
r1: 1C0 1C1
r2: 2C0 2C1 2C2
r3: 3C0 3C1 3C2 3C3
r4: 4C0 4C1 4C2 4C3 4C4
    c0  c1  c2  c3  c4
*/

#include<iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for(int i=2; i<=n; i++) factorial *= i;
    return factorial;
}

int main()
{
    int n, i, j, iCj;
    cout<<"Enter a number : ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            iCj = fact(i) / (fact(i-j) * fact(j));
            cout<< iCj <<" ";
        }
        cout<<endl;
    }
    return 0;
}
