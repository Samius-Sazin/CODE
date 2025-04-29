/*
Arr = 4 6 3 4 5 6
Here, 4 and 6 are present 2 times.
      3 and 5 are present only once

ANS = 3 & 5
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 3, 5, 4, 6, 2};
    int n = sizeof(arr) / sizeof(int);

    int XOR_Sum = 0;

    for(int i=0; i<n; i++)
    {
        XOR_Sum = XOR_Sum ^ arr[i];
    }

    //finding the Most right position of 1
    int i=0;
    int pos=0;
    while(!(XOR_Sum & (1<<i)) )
    {
        i++;
        pos++;
    }

    //finding the fist numb that present once
    int ans = XOR_Sum;
    for(int i=0; i<n; i++)
    {
        if(!(arr[i] & (1<<pos)) )
        {
            ans = ans ^ arr[i];
        }
    }

    cout<< "Two Numbers Preset Once is Array\n";
    cout<< "1st Number : " << ans << endl;
    cout<< "2nd Number : " << (XOR_Sum ^ ans) << endl;

    return 0;
}
