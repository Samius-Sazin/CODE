#include<iostream>
using namespace std;
int main()
{
    int n,r,c;
    cin>>n;

    for(r=n; r>=1; r--)
    {
        for(c=1; c<=r; c++)
        {
            cout<<char(64+c);
        }
        cout<<endl;
    }

    return 0;
}
/*

n=5
ABCDE
ABCD
ABC
AB
A

*/
