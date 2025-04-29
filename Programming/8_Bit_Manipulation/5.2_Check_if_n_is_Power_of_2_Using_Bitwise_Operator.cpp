/*
      8 = 1000
8-1 = 7 = 0111

8 & 7 = 0000 (if all 0, then n is a power of 2)

return !0 = 1(true)

*/

#include<iostream>
using namespace std;

int Check_Power_of_2(int num)
{
    return (num && !(num & (num-1)) );//true && !false -> return true(1)
}                                     //true && !true -> return false(0)

int main()
{
    int num;
    cout<< "Enter a Number to check : ";
    cin >> num;

    int ans = Check_Power_of_2(num);

    if(ans == 1)
    {
        cout<< num <<" is power of 2\n";
    }

    else
    {
        cout<< num <<" is not power of 2\n";
    }

    return 0;
}
