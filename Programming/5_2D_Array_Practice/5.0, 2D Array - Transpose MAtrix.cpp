/*
Transpose of a matrix

A matrix :
          1 2 3
          4 5 6
T matrix :
          1 4
          2 5
          3 6

*/

#include<iostream>
using namespace std;

void print_Arr(int *arr, int r, int c);

int main()
{
    int row, col;
    cout<<"Enter Row & Column : ";
    cin>>row>>col;
    int A[row][col], T[col][row];

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

//Converting
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            T[c][r] = A[r][c];
        }
    }

    cout<<"T matrix : \n";
    print_Arr((int*)T, col, row);

    return 0;
}


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

