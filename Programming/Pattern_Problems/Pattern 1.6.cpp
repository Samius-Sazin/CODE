#include<iostream>
using namespace std;
int main()
{
    int n,r,c;
    cin>>n;
    for(r=1; r<=n; r++)
    {
        for(c=1;c<=r;c++)
        {
            cout<<char(64+c);
        }
        cout<<"\n";
    }


    return 0;
}
/*

n=5
A
AB
ABC
ABCD
ABCDE

*/
