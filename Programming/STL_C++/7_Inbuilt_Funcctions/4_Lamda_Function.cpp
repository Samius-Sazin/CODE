#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Its a function

    //       parameter           argument
    cout << [](int x){return x>0;}(2) << endl; // 1
    cout << [](int x){return x<0;}(2) << endl; // 0

    //            parameter         argument
    auto ck = [](int x, int y){return x+y;}(2, 5);
    cout << ck << endl; // 7

    return 0;
}