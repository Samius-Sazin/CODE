#include<bits/stdc++.h>
using namespace std;

bool check(int q)
{
    return q>0;
}

bool check2(int q)
{
    return q<0;
}

int main()
{
    //all return boolean value
    //Instead of lamda function we can use any boolean return type function

    // ALL_OFF, use lamda function
    vector <int> v1 = {2, 3, 5};
    bool x = all_of(v1.begin(), v1.end(), [](int q){return q>0;});
    cout << x << endl;
    // 1, as (2,3,5) all>0




    // ANY_OFF, use lamda function
    vector <int> v2 = {2, -3, -5};
    bool y = any_of(v2.begin(), v2.end(), [](int q){return q>0;});
    cout << y << endl;
    //1, as among (2,-3,-5) at least one value 2>0 that satisfied the condition




    // NONE_OFF, use check(user define) function
    //none_of means if no values satisfied the condition then none-of function returns true
    vector <int> v3 = {2, 3, 5};
    bool z = none_of(v3.begin(), v3.end(), check);
    cout << z << endl;
    //0, as (2, 3, 5) all>0, and returns true froom check function

    z = none_of(v3.begin(), v3.end(), check2);
    cout << z << endl;
    //1, as (2, 3, 5) all !< 0, and returns false froom check function, so none_of func returns true
}