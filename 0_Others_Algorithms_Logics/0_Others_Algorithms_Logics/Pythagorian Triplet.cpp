#include<iostream>
using namespace std;

bool Check_Pytagorian_Triplet(int x, int y, int z);

int main()
{
    int a, b, c;
    cout<<"Enter 3 value : ";
    cin>> a >> b >> c;
    if(Check_Pytagorian_Triplet(a, b, c))
        cout<<"Pythagorian Triplet\n";
    else
        cout<<"Not Pythagorian Triplet\n";
    return 0;
}

bool Check_Pytagorian_Triplet(int x, int y, int z)
{
    int Max = x;
    if(y > Max) Max = y;
    if(z > Max) Max = z;

    if(Max == x)
        if(x*x == (y*y)+(z*z)) return true;
    if(Max == y)
        if(y*y == (x*x)+(z*z)) return true;
    if(Max == z)
        if(z*z == (y*y)+(x*x)) return true;
    return false;
}

/*
Another Method :

bool Check_Pytagorian_Triplet(int x, int y, int z)
{
    int a, b, c;
    a = max(x, max(y,z));

    if(a == x)
    {
        b = y;
        c = z;
    }
    else if(a == y)
    {
        b = x;
        c = z;
    }
    else if(a == z)
    {
        b = x;
        c = y;
    }

    if(a*a == (b*b)+(c*c)) return true;
    return false;
}*/

