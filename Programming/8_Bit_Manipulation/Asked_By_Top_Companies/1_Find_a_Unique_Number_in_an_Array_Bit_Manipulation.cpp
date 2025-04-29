/*
in an array all numbers are present twice expect one.
We have to find that one.
Arr -> 2 4 6 3 4 6 2
Ans -> 3
*/
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 3, 4, 6, 2};
    int n = sizeof(arr) / sizeof(int);

    int XOR_Sum = 0;

    for(int i=0; i<n; i++)
    {
        XOR_Sum = XOR_Sum ^ arr[i];
    }

    cout<< "Element That is in the Array Once : " << XOR_Sum <<endl;

    return 0;
}
