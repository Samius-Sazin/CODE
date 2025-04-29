/*
Max Till i

Enter Array Size : 6
Enter Your Array : 1 0 5 4 6 8
             ANS : 1 1 5 5 6 8

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Array Size : ";
    cin>> n;
    int arr[n];

    int Max = INT_MIN;

    cout<<"Enter Your Array : ";

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        Max = max(Max, arr[i]);
        cout<< Max << " ";
    }

    return 0;
}

