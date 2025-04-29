#include "bits/stdc++.h"
using namespace std;

int kedane(int *arr, int n)
{
    int current_sum = 0;
    int max_sum = INT_MIN;

    for(int i=0; i<n; i++)
    {
        current_sum += arr[i];
        if(current_sum < 0)
        {
            current_sum = 0;
        }
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

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

    //Case 0: If all vaues are Negative then just print the maximum of them
    int mx = INT_MIN;
    for(int i=0; i<n; i++)
    {
        mx = max(mx, arr[i]);

        if(arr[i] >= 0)
        {
            break;
        }
        if(i == n-1)
        {
            cout<< "Maximum Circular Subarray Sum (case: AllNeg) : " << mx << endl;
            return 0;
        }
    }

    //case 1: Non Wraping case, Simply apply kedane's Algorithm
    int nonWrap_sum = kedane(arr, n);

    //case 2: Wraping case, calculatetotal sum & inverse the array by multlying with -1.
    int total_sum = 0;
    for(int i=0; i<n; i++)
    {
        total_sum += arr[i];
        arr[i] = -arr[i];
    }

    int Wrap_sum = total_sum + kedane(arr, n);

    //but we dont know in which case did our array go to. it could be case-1 or case-2. now compare them.
    if(nonWrap_sum >= Wrap_sum)
    {
        cout << "Maximum Circular Subarray Sum (case: nonWrap) : " << nonWrap_sum << endl;
    }

    else
    {
        cout << "Maximum Circular Subarray Sum (case: Wrap): " << Wrap_sum << endl;
    }

    return 0;
}
