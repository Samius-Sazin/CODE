/*
n = 10
0 1 2 3 4 5 6 7 8 9 10

PRIME NUMBERS : 2, 3, 5, 7
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin >> n;

    //Initialize all element of array to ZERO
    //Or we can also use memset function
    int arr[n] = {0};

    for(int i=2; i<=n; i++)
    {
        if(arr[i] == 0)
        {
            for(int j=i*i; j<=n; j=j+i)
            {
                arr[j] = 1;
            }
        }
    }

    cout<<"Prime Numbers : \n";
    for(int i=2; i<=n; i++)
    {
        if(arr[i] ==  0)
        {
            cout<< i <<endl;
        }
    }
    return 0;
}
