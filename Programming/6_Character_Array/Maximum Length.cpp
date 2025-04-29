/*
Maximum Length = 5
*/

#include <iostream>
using namespace std;

int main()
{
    char arr[] = "My Name iss Samii";

    int curr_lngth = 0;
    int max_lngth = -1;
    int i = 0;

    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            max_lngth = max(max_lngth, curr_lngth);
            curr_lngth = 0;

            if (arr[i] == '\0')
            {
                break;
            }
        }

        else
        {
            curr_lngth++;
        }

        i++;
    }

    cout << "Maximum Word Length Available : " << max_lngth << endl;

    return 0;
}

