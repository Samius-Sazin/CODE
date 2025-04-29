//Input : axxbxc
//Output : abcxxx

#include<iostream>
using namespace std;

string Move_all_X_toLast(string str)
{
    if(str.length() == 0) return "";
    char ch = str[0];
    string extra = Move_all_X_toLast(str.substr(1));

    if(ch=='x' || ch=='X') return (extra + ch);
    else return (ch + extra);
}

int main()
{
    string str;
    cout<<"Enter a String : ";
    cin>>str;

    string ans = Move_all_X_toLast(str);

    cout<<"Final String is : "<< ans << endl;

    return 0;
}
