#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 6, 3, 5, 7};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, arr+n); //2,3,5,6,7


    // LOWER_BOUND
    // Return the given value, if it is available in array
    int *p1 = lower_bound(arr, arr+n, 3);
    cout << *p1 << endl; //p1 = 3, as 3 is avilabe in arr

    // Return the next greater element, if the given value is not available in array
    int *p2 = lower_bound(arr, arr+n, 4);
    cout << *p2 << endl;//p2=5, as 5 is not avilabe,but 5 is the next greater value




    // UPPER_BOUND
    //No matter value is available in array or not
    //It returns he next greater element of the array
    int *p3 = upper_bound(arr, arr+n, 3);
    cout << *p3 << endl; //p3 = 5, as 5 is the next greater value avilabe in arr

    int *p4 = upper_bound(arr, arr+n, 4);
    cout << *p4 << endl; //p4 = 5, as 5 is the next greater value though 4 is not available



    //FOR SET & MAP
    set <int> s;
    
    //2, 3, 4, 6
    s.insert(3);
    s.insert(4);
    s.insert(6);
    s.insert(2);

    // //Wrong Way
    // auto it = lower_bound(s.begin(), s.end(), 3);

    //Correct way
    auto it = s.lower_bound(5);
    cout << *it << endl; //*it = 6
}