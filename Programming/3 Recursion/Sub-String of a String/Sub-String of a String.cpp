//Input : ABC
//Output : "" C B BC A AC AB ABC

#include<iostream>
#include<string.h>

using namespace std;

void Sub_String(string str, string ans)
{
    if(str.length() == 0)
    {
        cout<< ans << endl;
        return;
    }

    char ch = str[0];
    string ros = str.substr(1); //ros = rest of the string

    Sub_String(ros, ans);
    Sub_String(ros, ans+ch);
}

int main()
{
    string str;
    cout<<"Enter a String : ";
    cin>>str;

    cout<<"Sub String is : "<< endl;

    Sub_String(str, "");

    return 0;
}
