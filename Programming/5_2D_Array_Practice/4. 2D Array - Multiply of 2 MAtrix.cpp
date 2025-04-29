/*
Multiplication of 2 matrix

Array A :
         1 2 3
         4 5 6
Array B :
         6 5
         4 3
         2 1
A x B :
        20 14
        56 41
*/

#include<iostream>
using namespace std;

void print_Arr(int *arr, int r, int c);

int main()
{
    int row1, col1, row2, col2;

    cout<<"Enter 1st Marix Row and Column : ";
    cin>> row1 >> col1;
    int A[row1][col1];

    cout<<"Enter 2nd Marix Row and Column : ";
    cin>> row2 >> col2;
    int B[row2][col2];

    if(col1 == row2)
    {
        int C[row1][col2];

        //scanning A matrix
        for(int r=0; r<row1; r++)
        {
            for(int c=0; c<col1; c++)
            {
                cout<<"A["<<r<<"]["<<c<<"] = ";
                cin>>A[r][c];
            }
            cout<<endl;
        }
        cout<<endl;

        //scanning B matrix
        for(int r=0; r<row2; r++)
        {
            for(int c=0; c<col2; c++)
            {
                cout<<"B["<<r<<"]["<<c<<"] = ";
                cin>>B[r][c];
            }
            cout<<endl;
        }

        cout<<"\n\nArray A : "<<endl;
        print_Arr((int*)A, row1, col1);

        cout<<"Array B : "<<endl;
        print_Arr((int*)B, row2, col2);

        int sum = 0;
        for(int i=0; i<row1; i++)
        {
            for(int j=0; j<col2; j++)
            {
                for(int k=0; k<col1; k++)
                {
                    sum += A[i][k] * B[k][j];
                }
                C[i][j] = sum;
                sum = 0;
            }
        }

        cout<<endl<<"A x B : "<<endl;
        print_Arr((int*)C, row1, col2);
    }

    else
        cout<<"1st matrix column != 2nd Matrix Row\n";

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
