#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Same way works in arr, vector, map, set....

    int arr[] = {3, 1, 5, -2, 1, 7};
    int n = sizeof(arr)/sizeof(int);

    // all functions returns iterator/address
    // Only count & accumulate function returns integer value

    // find MAXIMUM element ITERATOR/ADDRESS/POINTER way
    auto it = max_element(arr, arr+n);
    cout << "Max Element : " << *it << endl;

    it = max_element(arr+1, arr+(n-1));//find max among (1,5,-2,1)
    cout << "Max Element(index 1-(n-1)) : " << *it << "\n\n";
    /*  Max Element : 7
        Max Element(index 1-(n-1)) : 5
    */







    // find MINIMUM element without ITERATOR/ADDRESS/POINTER way
    //as min_element(); returns the address, we have to use * to get the value
    int val = *min_element(arr, arr+1);
    cout << "Min Element : " << val << endl;

    val = *min_element(arr+1, arr+(n-1));//find min among (1,5,-2,1)
    cout << "Min Element(index 1-(n-1)) : " << val << "\n\n";
    /*
        Min Element : 3
        Min Element(index 1-(n-1)) : -1    
    */







    // ACCUMULATE (sum of arr/vectror)
    // returns intger value
    // Syntex : accumulate(beg_add, end_add, initial_sum);
    int sum = accumulate(arr, arr+n, 0);
    cout << "Sum : " << sum << endl; //sum = 15

    sum = accumulate(arr, arr+n, 3);
    cout << "Sum : " << sum << "\n\n"; //sum = 18








    // COUNT
    int Count = count(arr, arr+n, 1);
    cout << "1 available : " << Count << " Times\n";
    
    Count = count(arr, arr+n, 2);
    cout << "2 available : " << Count << " Times\n";
    /*
        1 available : 2 Times
        2 available : 0 Times
    */








    // FIND element
    //returns iterator/address
    auto Find = find(arr, arr+n, -2);
    if(Find != arr+n)
    {
        cout << "Element Avaialable\n\n";
    }
    else
    {
        cout << "Not Available\n\n";
    }







    // REVERSE arr/vector
    // it reverse the actual arrraay, no copy generate
    reverse(arr+2, arr+n);//Only reverse from index 2
    for(int &i : arr)
    {
        cout << i << " ";
    }
    /*
        reversed part    (5 -2 1 7)
        
        actual  arr : 3 1 5 -2 1 7
        reversed arr: 3 1 7 1 -2 5
    */

   return 0;
}


/*
        Max Element : 7
        Max Element(index 1-(n-1)) : 5

        Min Element : 3
        Min Element(index 1-(n-1)) : -2

        Sum : 15
        Sum : 18

        1 available : 2 Times
        2 available : 0 Times
        Element Avaialable

        3 1 7 1 -2 5
*/