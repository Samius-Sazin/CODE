#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter character arr size : ";
    cin >> n;

    char arr[n + 1];
    cout << "Enter the Character Array : ";
    cin >> arr;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            cout << "Not Palindrome\n";
            return 0;
        }
    }

    cout << "Palindrome !!\n";

    return 0;
}
