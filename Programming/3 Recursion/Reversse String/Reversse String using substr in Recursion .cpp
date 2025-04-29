#include<iostream>
using namespace std;

void Reverse_String(string str)
{
    int length = str.length();

    if(length == 0) return;

    string extra = str.substr(1);

    Reverse_String(extra);

    cout<<str[0];
}

int main()
{
    string str;
    cout<<"Enter a String to reverse : ";
    cin>>str;

    cout<<"Reversed string is : ";
    Reverse_String(str);

    return 0;
}

