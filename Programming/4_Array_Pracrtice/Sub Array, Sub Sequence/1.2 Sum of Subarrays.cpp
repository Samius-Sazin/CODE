/*
Sum of All Sub-array
Array : 1 2 3
1st s.arr= 1 --- Sum=1
2nd s.arr= 1 2 - Sum=3
3rd s.arr= 1 2 3 Sum=6
4th s.arr= 2 --- Sum=2
5th s.arr= 2 3 - Sum=5
6th s.arr= 3 --- Sum=3
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Array Elements : ";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int sum, k=0;
    for(int i=0; i<n; i++)
    {
        sum = 0;
        for(int j=i; j<n; j++)
        {
            sum += arr[j];

            k++;
            cout<<"Sum of "<< k <<"th Subarray :";
            cout<< sum << endl;
        }
    }

    return 0;
}
