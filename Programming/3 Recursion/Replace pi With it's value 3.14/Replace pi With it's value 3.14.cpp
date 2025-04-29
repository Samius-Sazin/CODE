//Input : pippxxppiixipi
//Output : 3.14ppxxp3.14ixi3.14

#include<iostream>
using namespace std;

void Replace_pi(string str)
{
    if(str.length() == 0) return;

    if(str[0]=='p' && str[1]=='i')
    {
        cout<<"3.14";
        Replace_pi(str.substr(2));
    }
    else
    {
        cout<<str[0];
        Replace_pi(str.substr(1));
    }
}

int main()
{
    string str;
    cout<<"Enter a String : ";
    cin>>str;

    cout<<"Final String is : ";
    Replace_pi(str); //Replace pi by 3.1416

    return 0;
}
