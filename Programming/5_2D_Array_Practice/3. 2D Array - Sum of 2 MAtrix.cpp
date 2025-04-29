/*
Sum of 2 matrix
*/

#include<iostream>
using namespace std;

int main()
{
    int row, col;
    cout<<"Enter Row and Column : ";
    cin>> row >> col;
    int A[row][col], B[row][col], C[row][col];

    cout<<"Enter Value for A Matrix : \n";
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cout<<"A["<<r<<"]["<<c<<"] = ";
            cin>> A[r][c];
        }
        cout<<endl;
    }

    cout<<"\nEnter Value for B Matrix : \n";
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cout<<"B["<<r<<"]["<<c<<"] = ";
            cin>> B[r][c];
        }
        cout<<endl;
    }

    //Put A+B in C matrix
    for(int r=0; r<row; r++)
        for(int c=0; c<col; c++)
            C[r][c] = A[r][c] + B[r][c];

    cout<<"\nSum is : \n";
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cout<< C[r][c] <<" ";
        }
        cout<<endl;
    }


    return 0;
}

