//Input : 23
//Output : ad ae af bd be bf cd ce cf

#include<iostream>
#include<string.h>
using namespace std;

string Keypad_arr[] = {"", "/" ,"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void Phone_Keypad(string str, string ans)
{
    if(str.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch = str[0]; // ch = '2';

    //in this line I convert char type to int type
    //int n = int(ch - '0');
    //int n = int(ch) - 48;
    int n = int(ch) - int('0'); //n=ascii_of_2 - ascii_of_0 = 50-48 = 2

    string keypad = Keypad_arr[n]; //keypad= Keypad_arr[2]= "abc";
    string ros = str.substr(1); //ros = rest of the string

    for(int i=0; i<keypad.length(); i++)
        Phone_Keypad(ros, ans + keypad[i]);
}

int main()
{
    string num;
    cout<<"Enter a number : ";
    cin>>num;
    Phone_Keypad(num, "");

    return 0;
}
