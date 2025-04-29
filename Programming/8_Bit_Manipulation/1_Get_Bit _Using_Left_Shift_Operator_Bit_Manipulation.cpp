/*
5 = 0101
pos=3210

2nd position Bit = 1
3rd position bit = 0
*/

#include<iostream>
using namespace std;

int main()
{
    int num = 5;
    int pos = 2;

    int Bit_Mask = 1<<pos; //0001 -> 0100

    if(Bit_Mask & num)
    {
        cout << "Bit is ONE\n";
    }

    else
    {
        cout << "Bit is ZERO\n";
    }

    return 0;
}
