/*
GCD = Greatest Common Divisior
24 = 2 * 2 * 2 * 3
42 = 2 * 3 * 7
GCD = 2 * 3 = 6

           X   Y
Method 1: 42 - 24=18
          24 - 18=6
          18 - 6=12
          12 - 6=6
          6 - 6=0
    ans = 6


Method 2/ Euclid Algorithm:
           X   Y
          42 % 24=18
          24 % 18=6
          18 % 6=0
          6 % 0=0 //if y=0, ANS=x
    ans = 6
*/

#include<iostream>
using namespace std;

int GCD_method1(int x, int y)
{
    if(y > x)
    {
        swap(x, y);
    }

    int ans=-1;

    while(ans != 0)
    {
        ans = x-y;
        x = y;
        y = ans;

        if(y>x) swap(x, y);
    }

    return x; //return y;
}

int GCD_method2(int x, int y)
{
    if(y > x)
    {
        swap(x, y);
    }

    int rem;

    while(y != 0)
    {
        rem = x%y;
        x = y;
        y = rem;
    }

    return x;
}

int main()
{
    int x,y;
    cout<< "Enter 2 number : ";
    cin>> x >> y;

    cout<< "(Method1) GCD of " << x << " & " << y << " : " << GCD_method1(x, y) << endl;

    cout<< "(Method2, Euclid Algorithm) GCD of " << x << " & " << y << " : " << GCD_method2(x, y) << endl;

    return 0;
}
