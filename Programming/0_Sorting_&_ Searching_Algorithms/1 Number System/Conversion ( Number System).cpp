/*
Number System :

Binary - Decimal
Octal  - Decimal
Hexade - Decimal
Decimal - Binary
Decimal - Octal
Decimal - Hexaddecimal

*/
#include<iostream>
#include<string.h>
using namespace std;

void Bin_Dec();
void Oct_Dec();
void Hex_Dec();
void Dec_Bin();
void Dec_Oct();
void Dec_Hex();

int main()
{
    cout<<"*** Number System Conversion ***"<<endl<<endl;

    while(1)
    {
        int choice;
        cout<<"1. Binary - Decimal\n2. Octal - Decimal\n3. Hexadecimal - Decimal\n4. Decimal - Binary\n5. Decimal - Octal\n6. Decimal - Hexaddecimal\n7. Exit\n";
        cout<<"Enter your Choice : ";
        cin>>choice;

        if(choice == 1) Bin_Dec();
        else if(choice == 2) Oct_Dec();
        else if(choice == 3) Hex_Dec();
        else if(choice == 4) Dec_Bin();
        else if(choice == 5) Dec_Oct();
        else if(choice == 6) Dec_Hex();
        else break;
    }
    return 0;
}

//Binary to Decimal
void Bin_Dec()
{
    int bin, dec = 0, x = 1, y;

    cout<<"Enter a Binary Number : ";
    cin>>bin;

    cout<<"Bin("<< bin <<") = ";

    while(bin > 0)
    {
        y = bin % 10;
        dec += (y * x);
        x *= 2;
        bin /= 10;
    }

    cout<<"Dec("<< dec <<")\n\n";

    /*  while(bin > 0)
         {
              dec += (bin%10) * x;
              x *= 2;
              bin /= 10;
         }
    */
}

//Octal to Decimal
void Oct_Dec()
{
    int oct, dec = 0, x = 1;

    cout<<"Enter a Octal Number : ";
    cin>>oct;

    cout<<"Oct("<< oct <<") = ";

    while(oct > 0)
    {
        dec += (oct%10) * x;
        x *= 8;
        oct /= 10;
    }

    cout<<"Dec("<< dec <<")\n\n";
}

//HexaDecimal to Decimal
void Hex_Dec()
{
    string hex;
    int int_hex, dec = 0, x = 1;

    cout<<"Enter a Hexa-Decimal Number : ";
    cin>>hex;

    cout<<"Hexa("<< hex <<") = ";

    int len = hex.length();

    for(int i=len-1; i>=0; i--)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
        {
            int_hex = int(hex[i]) - '0';

            dec += int_hex * x;

        }

        else if(hex[i] >= 'A' && hex[i] <= 'F')
        {
            int_hex = hex[i] - 'A' + 10; //int_hex = int(hex[i]); int_hexa = 65(A); but i need A = 10

            dec += int_hex * x;
        }
        x *= 16;
    }

    cout<<"Dec("<< dec <<")\n\n";
}

//Decimal to Binary
void Dec_Bin()
{
    int dec, x = 1, bin = 0, rem;
    cout<<"Enter a Decimal Number : ";
    cin>>dec; //45

    while(x <= dec) x *= 2; //1 2 4 8 16 32 64
    x /= 2; //1 2 4 8 16 32

    cout<<"Dec("<< dec <<") = ";
    while(x > 0)
    {
        rem = dec/x; //rem=45/32=1
        dec = dec - (rem*x); //dec=45-(1*32)=16
        bin = (bin*10) + rem; //bin=(0*10)+1=1
        x = x/2; //x=16
    }
    cout<<"Bin("<< bin <<")\n\n";
}
//Decimal to Binary another process
/* void Dec_Bin()
 {
    int dec, rem, i=0;

    cout<<"Enter a Decimal Number : ";
    cin>>dec;

    cout<<"Dec("<< dec <<") = ";

    int bin[32];
    while(dec > 0)
    {
        bin[i] = dec%2;
        dec /= 2;
        i++;
    }

    cout<<"Bin(";
    for(i=i-1; i>=0; i--)
        cout<< bin[i];
    cout<<")\n\n";
  } */

//decimal to Octal
void Dec_Oct()
{
    int dec, x = 1, oct = 0, rem;
    cout<<"Enter a Decimal Number : ";
    cin>>dec;

    while(x <= dec) x *= 8;
    x /= 8;

    cout<<"Dec("<< dec <<") = ";

    while(x > 0)
    {
        rem = dec/x;
        dec = dec - (rem*x);
        oct = (oct*10) + rem;
        x = x/8;
    }

    cout<<"Oct("<< oct <<")\n\n";
}

//Decimal to HexaDecimal
void Dec_Hex()
{
    int dec, x = 1, rem;
    string hex = "";

    cout<<"Enter a Decimal Number : ";
    cin>>dec;

    while(x <= dec) x *= 16;
    x /= 16;

    cout<<"Dec("<< dec <<") = ";

    while(x > 0)
    {
        rem = dec/x;
        dec = dec - (rem*x);

        if(rem<=9) hex = hex + to_string(rem);
        else if(rem>=10 && rem<=15)
        {
            char c = 'A' + (rem - 10);
            hex = hex + c;
        }

        x = x/16;
    }

    cout<<"Hexa("<< hex <<")\n\n";
}
