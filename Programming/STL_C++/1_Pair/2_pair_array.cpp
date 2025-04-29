#include <iostream>
using namespace std;
int main()
{
    // int arr[] = {1, 2, 3};
    // int xrr[] = {4, 5, 6};

    pair<int, int> arr[3];
    arr[0] = {1, 4};
    arr[1] = {2, 5};
    arr[2] = {3, 6};

    cout << "First pair data : ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << " ";
    }

    cout << "\nSecond pair data : ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].second << " ";
    }
}
