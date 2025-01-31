/*
1. you have 15 taka
2. Per chocolate price 1 taka
3. For each chocolate you get 1 wraper
4. For 3 wrapper you get 1 more chocolate

      if at last u got 2 wraper,
         add 1 taka and get 1 more chocolate.
      if you got 1 wrapper nothing to do

6. so maximum how many chocolates you get?

*/

#include<iostream>
using namespace std;

int main()
{
    int taka, extra, rem=0;
    cout<< "Enter the amount you have : ";
    cin>> taka;

    extra = taka;
    do
    {
        rem += extra%3;//rem=15%3=0; rem=5%3=2
        extra = extra/3; //extra=15/3=5; extra=5/3=1
        taka += extra; //taka=15+5=20; taka=20+1=21
    }
    while(extra/3 > 0);

    if(rem > 1)
    {
        taka += 3 - rem;//taka = 21+3-2=22
    }

    cout<<"Total Chocolates = " << taka << endl;

    return 0;
}
