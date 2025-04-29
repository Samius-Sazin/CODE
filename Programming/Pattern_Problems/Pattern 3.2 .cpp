#include<iostream>
using namespace std;
int main()
{
    int n,r,c;
    cin>>n;
    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(r=n-1; r>=1; r--)
    {
        for(c=1; c<=r; c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

/*

n=5
*
**
***
****
*****
****
***
**
*

*/
