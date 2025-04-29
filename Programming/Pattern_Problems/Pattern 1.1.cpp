#include<iostream>
using namespace std;
int main()
{
    int n,r,c;
    cin>>n;
    for(r=1; r<=n;r++)
    {
        for(c=1;c<=r;c++)
            cout<<r;
        cout<<endl;
    }
    return 0;
}
/*
  n=4
  
    1
    22
    333
    4444
    
*/
