//Input : aaabbceed
//Output : abced

#include<iostream>
using namespace std;

string Remove_Duplicate(string str)
{
    if(str.length() == 0) return " ";
    char ch = str[0];
    string extra = Remove_Duplicate(str.substr(1));

    if(ch == extra[0]) return extra;
    else return (ch +extra);
}

int main()
{
    string str;
    cout<<"Enter a String : ";
    cin>>str;

    string ans = Remove_Duplicate(str);

    cout<<"Final String is : "<< ans << endl;

    return 0;
}
