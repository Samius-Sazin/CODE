#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    string s = "AbcDeFGh";

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<"Upper Case : "<< s << endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<"Lower Case : "<< s << endl;

    return 0;
}
