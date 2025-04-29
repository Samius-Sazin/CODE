/*
Subarray With Given Sum - o(n^2)

Element : 1 2 3 7 5
          0 1 2 3 4

Sum = 12
Sum of index 1,2,3 = 2+3+7 = 12

So, Subarray(2 3 4) or index(1 to 3) is the ans.

*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int s;
    cout<<"Enter Sum Value : ";
    cin>> s;

    int n;
    cout<<"Enter Array Size  : ";
    cin>> n;

    int arr[n];
    cout<<"Enter Arr Element : ";
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }

    int sum, i, j;

    for(i=0; i<n-1; i++)
    {
        sum = arr[i];

        for(j=i+1; j<n; j++)
        {

            if(sum == s){
                cout<< i <<" "<< j-1 <<endl; //here print the index of subarray if subarray's sum == given sum(s).

                for(int x=i; x<j; x++)
                    cout<< arr[x] <<" "; // here print the subarray if subarray's sum == given sum(s).

                return 0;
            }

            sum += arr[j];
        }
    }


    return 0;
}
