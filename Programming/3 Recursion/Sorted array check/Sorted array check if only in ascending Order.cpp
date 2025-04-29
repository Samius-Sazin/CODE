//Sorted Array Check (only if the array is in ascending order)

#include<iostream>
using namespace std;

bool Check_Sorted(int *arr, int n)
{
    if(n==1 || n==0) return true;                   // if the array is in Descending order
    if(arr[0] < arr[1] && Check_Sorted(arr+1, n-1)) // if(arr[0] > arr[1] && Check_Sorted(arr+1, n-1))
        return true;                                //     return true;
    return false;
}

int main()
{
    int n, res;
    cout<<"Enter Element : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Array : ";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    res = Check_Sorted(arr, n);

    if(res) cout<<"Array is Sorted"<<endl;
    else cout<<"Array is not Sorted"<<endl;

    return 0;
}

