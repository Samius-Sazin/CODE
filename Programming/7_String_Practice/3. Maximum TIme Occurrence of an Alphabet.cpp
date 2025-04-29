/*
samius sazin
Here 's' occurres maximum of 3 times
So, both print 3 & s
*/

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    cout<< "Enter a string : ";
    getline(cin, str);

    int freq[26];
    memset(freq, 0, sizeof(freq));

    for(int i=0; i<str.length(); i++)
    {
        freq[str[i] - 'a']++; //str[i]-'a' = 'a'-'a' = 0;
    }

    int Max = 0;
    char alphabet = 'a';

    for(int i=0; i<26; i++)
    {
        if(freq[i] > Max)
        {
            Max = freq[i];
            alphabet = i + 'a';
        }
    }

    cout<< "Maximum occurrence : "<< Max << endl;
    cout<< "The Alphabet is : " << alphabet << endl;

    return 0;
}

