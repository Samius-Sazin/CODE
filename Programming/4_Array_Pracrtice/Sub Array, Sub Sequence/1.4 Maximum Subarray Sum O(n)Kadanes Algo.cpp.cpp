/*
Maximum Subarray Sum Kadane's Algorithm
Arary : -1 2 -3 3 4 -6
Ans = 7

explain;
-1 = 0
2 = 2
2-3 = -1 = 0
3+4 = 7 (max)
3+4-6 = 1

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Size : ";
    cin >> n;

    int arr[n];
    cout << "Enter Arr Element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    int max_sum = INT_MIN;

    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        if(sum < 0)
        {
            sum = 0;
        }

        max_sum = max(max_sum, sum);
    }

    cout << "Maximum Sum of Subarray : " << max_sum << endl;

    return 0;
}
