/*
Sum of 2 digits = k, O(n)
In that case Array Must be in Sorted (ascending order)

If not then we need to sort the arr.
Then program's complexity will be like Sorting Alg. Complexity.

index       : 0 1 2 3  4
Given Array : 2 4 7 12 14

ANSWER : 7 + 12 = 19
Index : 2 3

*/

#include "bits/stdc++.h"
using namespace std;
int main()
{
    int arr[] = {2, 4, 7, 12, 14};
    int n = sizeof(arr) / sizeof(int);

    cout<< "Given Array : ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int target  = 19;

    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] == target)
        {
            cout << "ANSWER : " << arr[low] << " + " << arr[high] << " = " << target << endl;
            cout << "Index : " << low << " " << high << endl;
            return 0;
        }

        else if (arr[low] + arr[high] < target)
        {
            low++;
        }

        else if (arr[low] + arr[high] > target)
        {
            high--;
        }
    }

    cout << "Not Found\n";

    return 0;
}
