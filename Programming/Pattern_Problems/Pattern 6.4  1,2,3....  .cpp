#include<iostream>
using namespace std;
int main()
{
    int n,r,c,coun_t=1;
    cin>>n;

    for(r=1; r<=n; r++)
    {
        for(c=1; c<=r; c++)
        {
            cout<<coun_t++<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/*

n=5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/
