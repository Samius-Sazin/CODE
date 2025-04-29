/*
5 = 0101
pos:3210

Need to clear bit at position 2(3rd Bit).

Final = 0001 = 1
*/
#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int pos = 2; //3rd bit

    int Bit_Mask = 1 << pos; //0001<<2 = 0100

    Bit_Mask = ~(Bit_Mask); //1011

    int New_Numb = Bit_Mask & num;

    cout<< "New Number : " << New_Numb;

    return 0;
}
