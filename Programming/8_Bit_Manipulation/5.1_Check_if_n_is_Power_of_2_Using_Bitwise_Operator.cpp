#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<< "Enter a Number to check : ";
    cin >> num;
 
    if(num == 0)
    {
        cout<< "Invalid Number to Check.\n";
        return 0;
    }

    if(!(num & (num-1) ) )//if((num & (num-1)) == 0)
    {
        cout<< num <<" is power of 2\n";
    }
    else
    {
        cout<< num <<" is not power of 2\n";
    }

    return 0;
}
