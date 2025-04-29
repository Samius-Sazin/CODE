/*
n =  20

    20
   2  10
     2  5

Prime Factorization = 2, 2, 5
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number : ";
    cin>> n;

    int arr[n];

    for(int i=2; i<=n; i++)
    {
        arr[i] = i;
    }

    for(int i=2; i<=n; i++)
    {
        if(arr[i] == i)
        {
            for(int j=i*i; j<=n; j=j+i)
            {
                if(arr[j] = j)
                {
                    arr[j] = i;
                }
            }
        }
    }

    cout<< "Prime Factorization : ";
    while(n != 1)
    {
        cout<< arr[n] << " ";
        n = n/arr[n];
    }

    return 0;
}
