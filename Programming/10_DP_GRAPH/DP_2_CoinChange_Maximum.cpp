/*
Enter Number of coins : 4
Enter Coins : 2 3 5 10
Enter Total Cost : 15
Number of ways to make 15 are : 9
*/

#include<bits/stdc++.h>
using namespace std;

int solve(int *arr, int row, int col){
    int xrr[row][col];

    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            if(c == 0){
                xrr[r][c] = 1;
                continue;
            }
            if(r == 0){
                xrr[r][c] = 0;
                continue;
            }
            if(arr[r] > c){
                xrr[r][c] = xrr[r-1][c];
            }
            else{
                xrr[r][c] = xrr[r-1][c] + xrr[r][c - arr[r]];
            }
        }
    }

    return xrr[row-1][col-1];
}

int main(){
    cout << "Enter Number of coins : ";
    int coins; cin >> coins;

    cout << "Enter Coins : ";
    int arr[coins+1];
    arr[0] = 0;
    for(int i=1; i<=coins; i++){
        cin >> arr[i];
    }

    cout << "Enter Total Cost : ";
    int sum; cin >> sum;

    int res = solve(arr, coins+1, sum+1);

    cout << "Number of ways to make " << sum << " are : " << res << endl;
}