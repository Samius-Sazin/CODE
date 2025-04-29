#include <bits/stdc++.h>
using namespace std;

//print array
void print_arr(int *arr, int n);

//comparator that changes the functionality of inbuilt sorting method
bool comparator(int a, int b);

int main()
{
    int arr[] = {3, 5, 1, -1, 6};
    int n = sizeof(arr)/sizeof(int);

    // sort in ascending order
    sort(arr, arr+n); 
    print_arr(arr, n); // -1 1 3 5 6


    // sort in ascending order
    sort(arr, arr+n, comparator);
    print_arr(arr, n);// 6 5 3 1 -1 
}

//comparator
bool comparator(int a, int b)
{
    if (a < b)
    {
        return false;
    }
    return true;
}

//Print the array
void print_arr(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\n";
}