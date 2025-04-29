#include<iostream>
#include<math.h>
using namespace std;

bool Prime_Check(int n)
{
    for(int i=2; i<=sqrt(n); i++)
        if(n%i == 0) return false;

    return true;
}

int main()
{
    int a, b;
    cout << "Enter 2 Numbers : " ;
    cin >> a >> b;

    for(int i=a; i<=b; i++)
        if(Prime_Check(i)) cout<< i << endl;

    return 0;
}

