//Input : AB
//Output : "" B 66 A AB A66 65 65B 6566

#include<iostream>
#include<string.h>
using namespace std;

void Sub_String_ASCII(string str, string ans)
{
    if(str.length() == 0)
    {
        cout<< ans << endl;
        return;
    }

    char ch = str[0]; // ch = A
    int ascii = ch;  //ascii = 65 ; here 65 is in number.
    string ASCII = to_string(ascii); //ASCII = 65 ; but here 65 is a string.

    string ros = str.substr(1); //ros = rest of the string

    Sub_String_ASCII(ros, ans);
    Sub_String_ASCII(ros, ans+ch);
    Sub_String_ASCII(ros, ans+ASCII);
}

int main()
{
    string str;
    cout<<"Enter a String : ";
    cin>>str;

    cout<<"Sub String with ASCII value : "<< endl;

    Sub_String_ASCII(str, "");

    return 0;
}

