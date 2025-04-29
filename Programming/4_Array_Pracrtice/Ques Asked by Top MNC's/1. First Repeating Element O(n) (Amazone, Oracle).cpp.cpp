/*
First repeated element - o(n)

Element : 1 5 3 4 3 5 6
          0 1 2 3 4 5 6

Here 5,3 both repeated.
But 5 repeat at first so ANS = index+1 = 2

*/

#include<iostream>
#include<string.h>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Array Size : ";
    cin>> n;

    int arr[n];
    cout<<"Enter Arr Element : ";
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }

    const int N = 1e5 + 1;//Value of N is constant
    //1e6 = 10^6. As arr size (n)<=10^6 & I take 1 size bigger.
    //as 10^6 is too big, compiler cant work with 10^6 size, so i take 10^5


    int indx[N];
    memset(indx, -1, sizeof(indx));

    int min_indx = INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(indx[arr[i]] != -1)
        {
            min_indx = min(min_indx, indx[arr[i]] );
        }

        else
        {
            indx[arr[i]] = i;
        }
    }

    if(min_indx == INT_MAX)
    {
        cout << "No repeated element found\n";
    }
    else
    {
        cout<<"First Repeated element at Position : "<< min_indx+1 <<endl;
    }

    return 0;
}
