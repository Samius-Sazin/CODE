/*
2D - Matrix, Print Values in Spiral Order
(3X3)
1  2  3
8  9  4
7  6  5

Spiral Order :
1 2 3
4 5
6 7
8
9

*/

#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cout<< "Enter value of ROW & COLUMN : ";
    cin>> n;

    int arr[n][n];

    cout<< "...Enter Array Value...\n\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Array[%d][%d] : ", i, j);
            cin >> arr[i][j];
        }
        cout<< endl;
    }

    int top = 0;
    int down = n-1;

    int left = 0;
    int right = n-1;

    int direction = 0; //0=L->R, 1=T->D, 2=R->L, 3=D->U

    cout<<"...Print In Spiral Order...\n\n";

    while(top<=down && left<=right)
    {
        if(direction == 0)
        {
            for(int i=left; i<=right; i++)
            {
                cout << arr[top][i] << " ";
            }
            top++;
        }

        else if(direction == 1)
        {
            for(int i=top; i<=down; i++)
            {
                cout << arr[i][right] << " ";
            }
            right--;
        }

        else if(direction == 2)
        {
            for(int i=right; i>=left; i--)
            {
                cout << arr[down][i] << " ";
            }
            down--;
        }

        else if(direction == 3)
        {
            for(int i=down; i>=top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left++;
        }

        direction++;
        if(direction == 4)
        {
            direction = 0;
        }

        cout << endl;
    }

    return 0;
}
