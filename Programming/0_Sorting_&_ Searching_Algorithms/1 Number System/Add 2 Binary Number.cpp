#include<iostream>
#include<string.h>
using namespace std;

void Add_two_Binary(int a, int b)
{
    int prev_carry = 0;
    string sum = "";

    cout<<"so,  "<< a <<" + "<< b <<" = ";

    while(a>0 && b>0)
    {
        if(a%10==0 && b%10==0)
        {
            sum += to_string(prev_carry);
            prev_carry = 0;
        }

        else if(a%10==1 && b%10==1)
        {

            sum += to_string(prev_carry);
            prev_carry = 1;
        }

        else
        {
            if(prev_carry == 0)
            {
                sum += to_string(1);
                prev_carry = 0;
            }
            else
            {
                sum += to_string(0);
                prev_carry = 1;
            }
        }
        a /= 10;
        b /= 10;
    }

    while(a > 0)
    {
        if(a % 10 == 0)
        {
            sum += to_string(prev_carry);
            prev_carry = 0;
        }

        else if(a % 10 == 1)
        {
            if(prev_carry == 0)
            {
                sum += to_string(1);
                prev_carry = 0;
            }

            else if(prev_carry == 1)
            {
                sum += to_string(0);
                prev_carry = 1;
            }
        }
        a /= 10;
    }

    while(b > 0)
    {
        if(b % 10 == 0)
        {
            sum += to_string(prev_carry);
            prev_carry = 0;
        }

        else if(b % 10 == 1)
        {
            if(prev_carry == 0)
            {
                sum += to_string(1);
                prev_carry = 0;
            }

            else if(prev_carry == 1)
            {
                sum += to_string(0);
                prev_carry = 1;
            }
        }
        b /= 10;
    }

    if(prev_carry == 1)
    {
        sum += to_string(1);
    }

    for(int i=sum.length()-1; i>=0; i--)
        cout<<sum[i];

    cout<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter First Binary Number : ";
    cin>> a;
    cout<<"Enter Second Binary Number : ";
    cin>> b;

    Add_two_Binary(a, b);

    return 0;
}
