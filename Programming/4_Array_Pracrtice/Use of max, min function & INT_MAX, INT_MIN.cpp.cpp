/*
Find the max & min Value Using

INT_MIN
INT_MAX
max function
min function

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
        Min = min(Min, arr[i]);
        Max = max(Max, arr[i]);
    }

    printf("Min Value : %d\nMax value is : %d\n", Min, Max);

    return 0;
}

