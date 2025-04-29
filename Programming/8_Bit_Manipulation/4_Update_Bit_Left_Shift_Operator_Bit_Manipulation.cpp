/*
5 = 0101
pos:3210

Part 1: pos = 1, Operation = 0;(0 to 1)
        Final : 0111 = 7

Part 1: pos = 2, Operation = 1;(1 to 0)
        Final : 0001 = 1

*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number  : ";
    cin >> num;

    int pos;
    cout << "Enter Position : ";
    cin >> pos;

    int opr;
    cout << "Enter Operation (0 or 1) : ";
    cin >> opr;

    int Bit_Mask = 1 << pos;//0001<<pos

    if(opr == 0)//Set Bit. Convert 0 to 1
    {
        int New_Num = Bit_Mask | num;
        cout<<"New Number : "<<New_Num;
    }

    else if(opr == 1)//Clear Bit. Convert 1 to 0
    {
        Bit_Mask = ~(Bit_Mask);
        int New_Num = Bit_Mask & num;
        cout<<"New Number : "<<New_Num;
    }

    return 0;
}

