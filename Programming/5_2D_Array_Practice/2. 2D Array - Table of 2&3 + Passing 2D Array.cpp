/*
Storing the Tables of 2 & 3.
2*10(2 row, 10 column)

Table of 2 : 2 4 6 8  10 12 14 16 18 20
Table of 3 : 3 6 9 12 15 18 21 24 27 30
*/

#include<iostream>
using namespace std;

void Store_2D_Array(int arr[][10], int row, int col, int num);

int main()
{
    int Array[2][10];

    //     Passing Array,row,col,num
    Store_2D_Array(Array, 0, 10,  2);
    Store_2D_Array(Array, 1, 10,  3);

    //Print table of 2
    cout<<"Table of 2 : ";
    for(int c=0; c<10; c++)
        cout<<Array[0][c]<<" ";

    //Print table of 3
    cout<<endl<<"Table of 3 : ";
    for(int c=0; c<10; c++)
        cout<<Array[1][c]<<" ";


    return 0;
}

void Store_2D_Array(int arr[][10], int row, int col, int num)
{
    for(int c=1; c<=col; c++)
        arr[row][c-1] = num * c;

}
