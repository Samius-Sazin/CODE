/*
Arr = 4 6 3 4 5 7 6
Here, 4 and 6 are present 2 times.
      3, 5, 7 are present only once

ANS = 3, 5, 7
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 3, 4, 2, 2, 4};
    int n = sizeof(arr) / sizeof(int);
    int result = 0;

    for(int i=0; i<64; i++)
    {
        int sum = 0;
        for(int j=0; j<n; j++)//Travarse All Element of Array
        {
            //Find Bit(1) using Get Bit Method
            int Bit_Mask = 1<<i;//i refers the position
            if(arr[j] & Bit_Mask)
            {
                sum++;
            }
        }
        if(sum%3 != 0)
        {
            //set the Bit 1 to appropriate position by Set Bit method
            int bit_mask = 1<<i;//i refers the position
            result = result | bit_mask;
        }
    }

    cout<< "Unique Number is : " << result << endl;

    return 0;
}
