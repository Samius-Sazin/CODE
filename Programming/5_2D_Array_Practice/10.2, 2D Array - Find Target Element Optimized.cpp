/*
Find an element from a Matrix

A matrix :
1 2 3
4 5 6
7 8 9

TARGET : 7
Found at Position : 3 1 = A[3-1][2-1] = 4

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
    int row, col;
    cout<<"Enter ROW & COLUMN : ";
    cin>> row >> col;
    int A[row][col];

    //taking Input A matrix
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cout<<"A["<<r<<"]["<<c<<"] = ";
            cin>>A[r][c];
        }
        cout<<endl;
    }

    //print A matrix
    cout<<"A matrix : \n";
    print_Arr((int*)A, row, col);

    int target;
    cout<< "Enter Element to Find : ";
    cin>> target;

    //finding target element
    int r = 0;
    int c = col-1;

    while(r<row && c>=0)
    {
        if(A[r][c] == target)
        {
            cout<<"Item Found at Posiiton : "<< r+1 <<" "<< c+1 << endl;
            return 0;
        }

        else if(target > A[r][c])
        {
            r++;
        }

        else if(target < A[r][c])
        {
            c--;
        }
    }

    cout<< "Not Found !! \n";

    return 0;
}
