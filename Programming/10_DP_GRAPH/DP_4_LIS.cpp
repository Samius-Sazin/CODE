#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int lis[3][N];

int solve(int *arr, int n){
   lis[0][0] = INT_MIN;
   int ans = 0;

   for(int cc=1; cc<n+1; cc++){
      lis[0][cc] = arr[cc-1];
      for(int c=0; c<cc; c++){
         if(lis[0][c] < lis[0][cc]){
            //set length
            lis[1][cc] = max(lis[1][cc], lis[1][c] + 1);
            //set maximum length
            ans = max(ans, lis[1][cc]);
            //set previous
            if(lis[1][cc] == lis[1][c] + 1){
               lis[2][cc] = max(lis[2][cc], c);
            }
         }
      }
   }

   for(int x=0; x<=n; x++){
      cout << lis[2][x] << "...";
   }

   return ans;
}

int main(){
   cout << "Enter Number of Inputs : ";
   int n; cin >> n;

   cout << "Enter the inputs : \n";
   int arr[n];
   for(int i=0; i<n; i++){
      cin >> arr[i];
   }

   int ans = solve(arr, n);

   //find the index of value that has maximum length
   vector <int> v;
   int index;
   for(int c=1; c<=n; c++){
      if(lis[1][c] == ans){
         index = c;
      }
   }
   
   //insert Longest increasing subsequence values to a vector
   while(index != 0){
      v.push_back(lis[0][index]);
      index = lis[2][index];
   }

   //reverse the vector
   reverse(v.begin(), v.end());

   //print the vector
   cout << "Number of Increasing Subsequence : " << ans << endl;
   cout << "Subsequence : ";
   for(int i: v){
      cout << i << " ";
   }

   return 0;
}