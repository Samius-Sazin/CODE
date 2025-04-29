// Find last occurance of number in an Array
// ARRAY - 9 3 5 8 3 4
// Index - 0 1 2 3 4 5
// 3 found at position 4

#include<iostream>
using namespace std;

//Method 1:
int last_occurance(int *arr, int n, int i, int key)
{
    if(n == i) return -1;
    int index = last_occurance(arr, n, i+1, key);

    if(index != -1) return index;

    if(arr[i] == key) return i;

    return -1;
}

//Method 2:
int last_occurance(int *arr, int n, int key)
{
    if(n == 0) return -1;
    int index = last_occurance(arr+1, n-1, key);
    if(index == -1)
    {
        if(arr[0] == key) return 0;
        return -1;
    }
    index += 1;
    return index;
}

int main()
{
    int n, key, res, arr[] = {2, 4, 7, 9, 3, 5, 8, 3, 4, 2};
    n = sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"\nEnter Element to found : ";
    cin>>key;

    //res = last_occurance(arr, n, key);
    res = last_occurance(arr, n, 0, key);

    if(res != -1) cout<<"Element Found at Position : "<<res<<endl;
    else cout<<"Element Not Found"<<endl;

    return 0;
}

