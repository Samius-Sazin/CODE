/*
'a' - 'A' = 32;

*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str = "AbcDeFgH";

    //for make str in upper case
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }
    cout<< "Upper Case : ";
    cout<< str << endl;

//For make str in lower case
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }

    cout<< "Lower Case : ";
    cout<< str << endl;

    return 0;
}
