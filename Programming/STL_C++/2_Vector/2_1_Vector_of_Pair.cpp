#include <bits/stdc++.h>
using namespace std;

void print_Vector_pair(vector<pair<int, int>> &v)
{
    cout << "Vector Size : " << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << "v[" << i << "] " << v[i].first << " " << v[i].second << endl;
    }

    cout << endl;
}

int main()
{

    // Initialize            // v[0]   v[1]   v[2]
    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};
    cout << "v ";
    print_Vector_pair(v);
    /* Size : 3
       v[0] 1 2
       v[1] 3 4
       v[2] 5 6     */





    // print v vector pair in iterator way
    vector<pair<int, int>>::iterator it;

    int i = 0;
    for (it = v.begin(); it != v.end(); it++, i++)
    {
        cout << (*it).first << " " << it->second << endl;
    }
    cout << endl;
    /* Size : 3
    v[0] 1 2
    v[1] 3 4
    v[2] 5 6     */






    // initialize another approach
    vector<pair<int, int>> v1(3); // 3 size vector of pair, all value '0'
    v1[0].first = 10;
    v1[0].second = 20;

    v1[1] = {30, 40};
    v1[2] = make_pair(50, 60);

    v1.push_back({99, 88}); // now v1 size = 4

    cout << "v1 ";
    print_Vector_pair(v1);
    /*  Size : 4
        v[0] 10 20
        v[1] 30 40
        v[2] 50 60
        v[3] 99 88      */





    // Another approch
    int n = 3, x = 4, y = 7;
    vector<pair<int, int>> v2;

    for (int i = 0; i < n; i++)
    {
        v2.push_back({x, y});
        x++;
        y++;
    }
    print_Vector_pair(v2);
    /*  Size : 3
        v[0] 4 7
        v[1] 5 8
        v[2] 6 9      */
}

/*
v Vector Size : 3
v[0] 1 2
v[1] 3 4
v[2] 5 6

v1 Vector Size : 4
v[0] 10 20
v[1] 30 40
v[2] 50 60
v[3] 99 88

Vector Size : 3
v[0] 4 7
v[1] 5 8
v[2] 6 9
*/