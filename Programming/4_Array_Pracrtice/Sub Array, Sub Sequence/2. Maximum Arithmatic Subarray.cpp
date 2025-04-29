/*

Enter Number of Test Cases : 2

Enter Array Size : 7
Enter Array Elements : 10 7 4 6 8 10 11

        Longest Arithmatic Subarray : 4 6 8 10
        Subarray Size :4


Enter Array Size : 7
Enter Array Elements : 10 7 8 9 11 13 15

        Longest Arithmatic Subarray : 9 11 13 15
        Subarray Size :4

*/

#include<iostream>
using namespace std;

int main()
{
    int t;
    cout<<"Enter Number of Test Cases : ";
    cin>> t;
    cout<<endl;

    while(t--)
    {
        int n;
        cout<<"Enter Array Size : ";
        cin>> n;

        int arr[n];
        cout << "Enter Array Elements : ";
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        int ans = 2;
        int final_ans = 2;
        int diff = arr[0]-arr[1];
        int start = 0,  sub_arr_sz = 2; // for print the subarray

        for(int i=1; i<n-1; i++)
        {
            if(diff == (arr[i]-arr[i+1]))
            {
                ans++;
                final_ans = max(final_ans, ans);

                if(i == n-2)
                {
                    start = i+1;
                }
            }

            else
            {
                diff = arr[i]-arr[i+1];
                ans = 2;

                if(final_ans > sub_arr_sz) // for print the subarray
                {
                    start = i;
                }
                sub_arr_sz = final_ans;
            }
        }

        start -= final_ans;
        start += 1;

        cout<<"\tLongest Arithmatic Subarray : ";

        int i = 0;
        do
        {
            cout<< arr[start] <<" ";
            start++;
            i++;
        }
        while(i != final_ans);

        cout<<"\n\tSubarray Size :"<< final_ans <<endl<<endl;
    }

    return 0;
}
