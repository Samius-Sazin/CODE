/*
19 = 01011
Ans = 3
*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<< "Enter a Number : ";
    cin>> num;

    int Count = 0;
    int temp = num;

    while(temp)
    {
        temp = temp & (temp-1);
        Count++;
    }

    cout<< "Number of ONE in Binary Form of "<< num <<" is : "<< Count << endl;

    return 0;
}
