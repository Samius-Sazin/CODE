/*
Find the missing smallest integer includeing 0.

Enter Array Size : 6
Enter Arr Element : 0 -9 1 3 -4 5
Missing Smallest Positive Integer : 2

*/

#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n, i;
    cout<< "Enter Array Size : ";
    cin>> n;

    int arr[i], mx=INT_MIN;
    cout<<"Enter Arr Element : ";
    for(i=0; i<n; i++)
    {
        cin>> arr[i];
        if(mx < arr[i])
        {
            mx = arr[i];
        }
    }

    const int N = mx+1;
    bool check[N];

    for(i=0; i<N; i++)
    {
       check[i] = false;
    }

    for(i=0; i<n; i++)
    {
        if(arr[i] >= 0)
        {
            check[arr[i]] = true;
        }
    }

    for(i=0; i<N; i++)
    {
        if(check[i] == false)
        {
            cout<<"Missing Smallest Integer>=0 : "<< i <<endl;
            return 0;
        }
    }

    cout<<"No missing item found\n";

    return 0;
}
