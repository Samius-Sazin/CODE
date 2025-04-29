/*
Maximum Subarray Sum
Arary : 1 2 3 4
Ans = 7

explain;
1
1 2
1 2 3
1+2+3+4 = 7

2
2 3
2 3 4

3
3 4

4
*/

#include "bits/stdc++.h"
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

    int sum, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            mx = max(mx, sum);
            sum += arr[j];
        }
        mx = max(mx, sum);
    }

    cout << "Maximum Sum of Subarray : " << mx << endl;

    return 0;
}
