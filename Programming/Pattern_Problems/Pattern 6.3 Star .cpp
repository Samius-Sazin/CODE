#include<iostream>
using namespace std;
int main()
{
    int n,r,c;
    cin>>n;

    for(r=1; r<=n; r++)
    {
        for(c=1; c<=n; c++)
        {
            if(r==c || r+c==n+1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/*

n=5
*   *
 * *
  *
 * *
*   *

*/
