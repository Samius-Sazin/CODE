#include<iostream>
using namespace std;
int main()
{
    int n,r,c,coun_t;
    cin>>n;

    for(r=n; r>=1; r--)
    {
        for(c=1; c<=n-r; c++)
            cout<<" ";

        coun_t=1;
        for(c=1; c<=r; c++)
            cout<<coun_t++;

        for(c=r-1; c>=1; c--)
            cout<<c;
        cout<<endl;
    }


    return 0;
}

/*

n=4
1234321
 12321
  121
   1

*/
