/*
Enter Numb of Students : 2
enter first & second name :
Samius
Sazin

Enter Numb of Marks : 2
Enter Marks : 90 95

enter first & second name :
Rakib 
Hasan

Enter Numb of Marks : 2
Enter Marks : 80 89

Name : Rakib Hasan
Numbers : 80 89

Name : Samiu Sazin
Numbers : 90 95
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<pair<string, string>, vector<int>> m;

    cout << "Entetr Numb of Studens : ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cout << "enter first & second name : " << endl;
        string n1, n2;
        cin >> n1 >> n2;

        cout << "\nEnter Numb of Marks : ";
        int marks;
        cin >> marks;

        cout << "Enter Marks : ";
        for (int j = 0; j < marks; j++)
        {
            int val;
            cin >> val;
            m[make_pair(n1, n2)].push_back(val);
        }
    }

    for (auto &i : m)
    {
        cout << "Name : ";
        cout << i.first.first << " " << i.first.second << endl;

        cout << "Numbers : ";
        for (auto &j : i.second)
        {
            cout << j << " ";
        }
        cout << "\n\n";
    }
}

