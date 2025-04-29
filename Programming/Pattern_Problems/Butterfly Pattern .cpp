#include<iostream>
using namespace std;
int main()
{
    int n,r,c;
    cin>>n;
    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
            cout<<"*"; //print first part star
        for(c=1; c<=n-r; c++)
            cout<<" "; //print first part space
        for(c=1; c<=n-r; c++)
            cout<<" "; //print 2nd part space
        for(c=1; c<=r; c++)
            cout<<"*"; //print 2nd part stars
        cout<<endl;
    }

    for(r=n; r>=1; r--)
    {
        for(c=1; c<=r; c++)
            cout<<"*";
        for(c=1; c<=n-r; c++)
            cout<<" ";
        for(c=1; c<=n-r; c++)
            cout<<" ";
        for(c=1; c<=r; c++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}
/*
n=4

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/
