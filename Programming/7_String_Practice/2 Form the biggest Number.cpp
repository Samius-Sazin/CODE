#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    string str = "30251"; //biggest number will be 53210

    sort(str.begin(), str.end(), greater<int>());

    cout<< "Biggest Number : " << str << endl;

    return 0;
}
