/*
Sum of Upper & Lower Triangle

A matrix :
          1 2 3
          4 5 6
          7 8 9
Sum of Upper Triangle values 2+3+6 = 11
Sum of Lower Triangle values 4+7+8 = 19
*/

#include<iostream>
using namespace std;

int main()
{
    int row, col, sum_upper_Triangle = 0, sum_lower_Triangle = 0;
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
            if(c > r) sum_upper_Triangle += A[r][c]; //Incase of Upper Triangle : Column > Row
            if(c < r) sum_lower_Triangle += A[r][c]; //Incase of Lower Triangle : Row > Column

            cout<<A[r][c]<<" ";
        }
        cout << endl;
    }

    cout<<"Sum of Upper Triangle values = "<< sum_upper_Triangle <<endl;
    cout<<"Sum of Lower Triangle values = "<< sum_lower_Triangle <<endl;

    return 0;
}
