#include<iostream>
using namespace std;
int main()
{
    int Array[] = {1, 2, 3, 4, 5, 6};
    //int i; error
    for(int i:Array) //for each loop,,must declare i in loop
    {
        cout<<i<<" ";
    }

    return 0;
}
