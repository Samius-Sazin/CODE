/*
Subarray With Given Sum - o(n)

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

    int i=0, j=0, sum=0;

    while(j<n)
    {
        sum += arr[j];

        while(sum>s && i!=n)
        {
            sum -= arr[i];
            i++;
        }

        if(sum == s)
        {
            cout<< i <<" "<< j;
            return 0;
        }

        j++;
    }

    //Another Way
//    while(j<n && (sum+arr[j])<=s)
//    {
//        sum += arr[j];
//        j++;
//    }
//
//    if(sum == s)
//    {
//        cout<< i <<" "<< j-1;
//        return 0;
//    }
//
//    while(j<n)
//    {
//        sum += arr[j];
//
//        while(sum > s)
//        {
//            sum -= arr[i];
//            i++;
//        }
//
//        if(sum == s)
//        {
//            cout<< i <<" "<< j;
//            return 0;
//        }
//
//        j++;
//    }

    cout<<"Not Found\n";

    return 0;
}
