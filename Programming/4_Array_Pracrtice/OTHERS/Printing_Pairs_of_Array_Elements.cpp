/*
INPUT : 1 2 3 4
OUTPUT : [1,2] [1,3] [1,4]
         [2,3] [2,4]
         [3,4]
*/

#include<iostream>
using namespace std;

void pairs(int *A,int el)
{
    int i,j;
    for(i=0; i<el; i++)
    {
        for(j=i+1; j<el; j++)
        {
            //cout<<A[i]<<","<<A[j]<<" ";
            printf("[%d,%d]",A[i],A[j]);
            cout<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int arr[]= {1,2,3,4};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    pairs(arr,n);
}
