#include<iostream>
using namespace std;

void rev(int *A,int el)
{
    int S=0;
    int E=el-1;

    while(S!=E && S<E)
    {
        swap(A[S],A[E]);
        S++;
        E--;
    }
    for(int i=0; i<el; i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    int arr[]= {1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rev(arr,n);
}
