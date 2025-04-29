/*
Sum of Diagonal Value

A matrix :
          1 2 3
          4 5 6
          7 8 9
Sum of the Diagonal value = 15

*/

#include<iostream>
using namespace std;

int main()
{
    int row, col, sum = 0;
    cout<<"Enter Row & Column : ";
    cin >> row >> col;
    int A[row][col];

    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cout<<"A["<<r<<"]["<<c<<"] = ";
            cin >> A[r][c];
        }
        cout << endl;
    }

    cout<<"A matrix : \n";
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            if(r == c) sum += A[r][c];
            cout<<A[r][c]<<" ";
        }
        cout << endl;
    }

    cout<<"Sum of the Diagonal value = "<< sum <<endl;

    return 0;
}
