#include <stdio.h>

//declare all functions
void insert(int value, int location);
void print();

//declare the heap array
int arr[100], n;

int main()
{
    int choice, value;
    n = 0;

    while(1)
    {
        printf("1. Insert Element\n");
        printf("2. Print Element\n");
        printf("3. Exit\n");
        printf("Enter Your Choice : ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Enter Value for Heap : ");
            scanf("%d", &value);
            insert(value, n);
            n += 1;
        }

        else if(choice == 2)
        {
            print();
        }

        else if(choice == 3)
        {
            break;
        }

        else
        {
            printf("Invalid!!/n");
        }
    }

    return 0;
}

void insert(int value, int location)
{
    int Parent_Node;

    while(location > 0)
    {
        Parent_Node = (location-1)/2;

        if(value <= arr[Parent_Node])
        {
            arr[location] = value;
            return;
        }

        else if(value > arr[Parent_Node])
        {
            arr[location] = arr[Parent_Node];
            location = Parent_Node;
        }
    }

    arr[0] = value;
}

void print()
{
    if(n == 0)
    {
        printf("Heap is Empty\n");
        return;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}
