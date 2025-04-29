#include "bits/stdc++.h"
using namespace std;
int main()
{
    int target;
    cout<< "Enter target Value : ";
    cin>> target;

    int n;
    cout << "Enter Array Size : ";
    cin >> n;

    int arr[n];
    cout << "Enter Arr Element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout<< i <<" "<< j << endl;
                break;
            }
        }
    }

    return 0;
}
