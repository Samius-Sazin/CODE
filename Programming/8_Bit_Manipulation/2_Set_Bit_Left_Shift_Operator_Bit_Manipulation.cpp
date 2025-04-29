/*
5 = 0101
pos:3210

Need to set 1 at position 1.

Final = 0111 = 7
*/
#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int pos = 1;

    int Bit_Mask = 1 << pos;

    int New_Numb = Bit_Mask | num;

    cout<< "New Number : " << New_Numb;

    return 0;
}
