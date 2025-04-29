/*
Transpose of a matrix (OPTIMIZED)
Only Work for Square Matrix

A matrix :
               1 2 3
               4 5 6
               7 8 9
Trans. matrix :
               1 4 7
               2 5 8
               3 6 9

*/

#include<iostream>
using namespace std;

//Function That Help to print a 2D Matrix
void print_Arr(int *arr, int r, int c)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<< *(arr + i*c +j)<<" ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout<<"Enter Value of n : ";
    cin>>n;
    int A[n][n];

    //taking Input A matrix
    for(int r=0; r<n; r++)
    {
        for(int c=0; c<n; c++)
        {
            cout<<"A["<<r<<"]["<<c<<"] = ";
            cin>>A[r][c];
        }
        cout<<endl;
    }

    //print A matrix
    cout<<"A matrix : \n";
    print_Arr((int*)A, n, n);

    //Converting by swaping values
    for(int r=0; r<n; r++)
    {
        for(int c=r; c<n; c++)
        {
                swap(A[r][c], A[c][r]);
        }
    }

    //Printing After Trnspose
    cout<<"Transpose matrix : \n";
    print_Arr((int*)A, n, n);

    return 0;
}
