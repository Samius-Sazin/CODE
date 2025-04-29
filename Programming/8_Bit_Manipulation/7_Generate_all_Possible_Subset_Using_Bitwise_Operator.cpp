/*
arr  = 1 2 3
1
2
12
3
13
23
123
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter Array Size : ";
    cin>> n;

    int arr[n];
    cout<< "Enter Array Element : ";
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }

//    char arr[]={"abc"};
//    int n=3;

    int ttl_subset = 1<<n;//1<<3=1*(2^3)=8

    for(int bit_mask=0; bit_mask<ttl_subset; bit_mask++)
    {
        for(int j=0; j<n; j++)
        {
            if(bit_mask & (1<<j))
            {
                cout<<arr[j];
            }
        }
        cout<<endl;
    }

    return 0;
}
