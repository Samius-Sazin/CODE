/*
Find the max & min Value Using

INT_MIN
INT_MAX

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number of Elements : ";
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];

    int Min = INT_MAX;
    int Max = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(Min > arr[i]) Min = arr[i];
        if(Max < arr[i]) Max = arr[i];
    }

    printf("Min Value : %d\nMax value is : %d\n", Min, Max);

    return 0;
}

