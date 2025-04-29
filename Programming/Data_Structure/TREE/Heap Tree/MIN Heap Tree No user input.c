
#include <stdio.h>

void insert(int value, int n);

// declare the heap array
int arr[100];

int main()
{
    int n = 0;

    insert(10, n);
    n++;
    insert(5, n);
    n++;
    insert(9, n);
    n++;
    insert(20, n);
    n++;
    insert(11, n);
    n++;

    printf("Print Heap Tree : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void insert(int value, int n)
{
    int P_Node;

    while (n > 0)
    {
        P_Node = (n - 1) / 2;

        if (value >= arr[P_Node])
        {
            arr[n] = value;
            return;
        }

        else if (value < arr[P_Node])
        {
            arr[n] = arr[P_Node];
            n = P_Node;
        }
    }

    arr[0] = value;
}
