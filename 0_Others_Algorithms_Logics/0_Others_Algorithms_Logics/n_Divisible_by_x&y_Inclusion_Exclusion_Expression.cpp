/*
How many numbers between 1 to 50
are divisible by only 5, only 7. Not divisible by both

ANS = (Numbers that divisible by 5 + Numbers that divisible by 5) - Numbers divisible by both 5&7
ANS = (5*10)+(7*7)-(5*7)
    = (10 + 7) - 1
    = 16
*/

#include<iostream>
using namespace std;

int main()
{
    int n, x, y;
    cout << "Enter Number : ";
    cin >> n;
    cout << "Enter X & Y value : ";
    cin >> x >> y;

    int count1 = n/x;
    int count2 = n/y;
    int count3 = n/(x*y);

    int ans = (count1 + count2) - count3;

    cout << "Divisible by only " << x << ", " << y << " : " << ans;

    return 0;
}
