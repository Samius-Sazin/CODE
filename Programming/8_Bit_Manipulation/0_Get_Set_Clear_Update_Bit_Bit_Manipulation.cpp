#include<iostream>
using namespace std;

void Get_Bit(int num, int pos);
void Set_Bit(int num, int pos);
void Clear_Bit(int num, int pos);
void Update_Bit(int num, int pos, int New_Bit);

int main()
{
    int choice;
    cout<<"1. Get Bit\n2. Set Bit\n3. Clear Bit\n4. Update Bit\n";
    cout<<"Enter Choice : ";
    cin>> choice;

    int num;
    cout<<"Enter Number : ";
    cin>> num;

    int pos;
    cout<<"Enter Position : ";
    cin>> pos;

    if(choice == 1)
    {
        Get_Bit(num, pos);
    }

    else if(choice == 2)
    {
        Set_Bit(num, pos);
    }

    else if(choice == 3)
    {
        Clear_Bit(num, pos);
    }

    else if(choice == 4)
    {
        int New_Bit;
        cout << "Enter New_Bit (0 or 1) : ";
        cin >> New_Bit;

        Update_Bit(num, pos, New_Bit);
    }

    return 0;
}

void Get_Bit(int num, int pos)
{
    int Bit_Mask = 1 << pos;

    if(num & Bit_Mask)
    {
        cout<< "Bit is ONE\n";
    }
    else
    {
        cout<<"Bit is ZERO\n";
    }
}

void Set_Bit(int num, int pos)
{
    int Bit_Mask = 1 << pos;

    int New_Num = Bit_Mask | num;

    cout<< "New Number is : " << New_Num;
}

void Clear_Bit(int num, int pos)
{
    int Bit_Mask = 1 << pos;

    int New_Bit_Mask = ~(Bit_Mask);

    int New_Num = New_Bit_Mask & num;

    cout<< "New Number is : " << New_Num;
}

void Update_Bit(int num, int pos, int New_Bit)
{
    //clearing the bit
    int Bit_Mask = 1 << pos;
    int New_Bit_Mask = ~(Bit_Mask);
    int New_Num = New_Bit_Mask & num;//Here the bit we finding will be ZERO

    //Set 1 or 0 to the position
    New_Num = New_Num | (New_Bit << pos);

    cout<< "New Number is : " << New_Num;
}
