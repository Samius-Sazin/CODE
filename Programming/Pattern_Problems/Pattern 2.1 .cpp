#include<iostream>
using namespace std;
int main()
{
    int n,r,c;
    cin>>n;
    for(r=n; r>=1; r--)
    {
        for(c=1;c<=r;c++)
        {
            cout<<c;
        }
        cout<<"\n";
    }


    return 0;
}
/*

n=5
12345
1234
123
12
1

*/
