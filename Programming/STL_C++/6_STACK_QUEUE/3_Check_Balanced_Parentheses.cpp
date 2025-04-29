/*
Enter Brackets : {[(])]}
Not Balanced

Enter Brackets : {{[[(())]]}}
Balanced
*/

#include<bits/stdc++.h>
using namespace std;

unordered_map<char, int> Map = {{'(',-1}, {'{',-2}, {'[',-3},{')',1}, {'}',2}, {']',3}};

void solve(string str);

int main()
{
    cout << "Enter Brackets : ";
    string str; cin >> str;

    solve(str);
}


void solve(string str)
{
    stack <char> s;

    for(auto &ch : str)//for(char &ch : str)
    {
        if(Map[ch] < 0)
        {
            s.push(ch);
        }

        else
        {
            if(s.empty())
            {
                cout << "Not Balanced\n";
                return;
            }

            if(Map[s.top()] + Map[ch] != 0)
            {
                cout << "Not Balanced\n";
                return;
            }

            s.pop();
        }
    }

    if(s.empty())
    {
        cout << "Balanced\n";
    }

    else
    {
        cout << "Not Balanced\n";
    }
    
}