#include <iostream>
using namespace std;
int main()
{
    pair<int, int> arr[3];

    // //user input
    // cout << "Enter input for First Pair : ";
    // for (int i = 0; i < 3; i++)
    // {
    //     cin >> arr[i].first;
    // }

    // cout << "Enter input for Second Pair : ";
    // for (int i = 0; i < 3; i++)
    // {
    //     cin >> arr[i].second;
    // }

    //anotyher method
    // arr[0].first = 1;
    // arr[1].first = 5;
    // arr[2].first = 3;

    // arr[0].second = 9;
    // arr[1].second = 4;
    // arr[2].second = 7;


    //Another Method
    arr[0] = {1, 9};
    arr[1] = {5, 4};
    arr[2] = {3, 7};


    cout << "First pair data : ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << " ";
    }

    cout << "\nSecond pair data: ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].second << " ";
    }



    swap(arr[0], arr[2]);



    cout << "\n\nFirst pair data : ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << " ";
    }

    cout << "\nSecond pair data: ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].second << " ";
    }

    return 0;
}

/*
First pair data : 1 5 3 
Second pair data: 9 4 7 

First pair data : 3 5 1 
Second pair data: 7 4 9
*/