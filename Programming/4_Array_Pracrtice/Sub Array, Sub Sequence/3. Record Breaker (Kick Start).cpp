/*
Record Breaking Days.
conditions :
      1. if 1st element > 2nd element
      2. if i th element > i+1 th element
      3. if last element > all the elelments

Enter array Size : 8
Enter array element : 1 2 0 7 2 0 2 2
                      n y n y n n n n
Number of Record Breaking Days : 2

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter array Size : ";
    cin >> n;

    int arr[n];
    cout << "Enter array element : ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    if(n=1)
    {
        cout<< "Number of Record Breaking Day : 1" <<endl;
        return 0;
    }

    int Max = arr[0];
    int record_brk_day = 0;

    if(arr[0] > arr[1])
    {
        record_brk_day++;
    }

    for(int i=1; i<n-1; i++)
    {
        if(arr[i]>Max && arr[i]>arr[i+1])
        {
            record_brk_day++;
        }
        Max = max(Max, arr[i]);
    }

    if(arr[n-1] > Max)
    {
        record_brk_day++;
    }

    cout<< "Number of Record Breaking Days : " << record_brk_day << endl;

    return 0;
}
