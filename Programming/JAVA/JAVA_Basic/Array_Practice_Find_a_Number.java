import java.util.*;
public class Array_Practice_Find_a_Number
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

//        //Declare & Initialize an Array
//        int arr[] = {1, 3, 5, 8, 9, 4, 11, 17};
//        //identify its size
//        int size = arr.length;

//        //Declare an Array witrh 10 size.
//        //In this case array index value automatically initialize with ZERO
//        int arr[] = new int[10]; //position of brackets doesn't matter


        System.out.print("Enter Array Size : ");
        int n = sc.nextInt();

        //Declare array with n size
        int[] arr = new int[n]; //position of brackets doesn't matter

        //Scan array
        System.out.print("Enter Array  Values : ");
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
        }

        //print the array
        System.out.print("Print Array Values : ");
        for(int i=0; i<n; i++)
        {
            System.out.print(arr[i] + " ");
        }

        System.out.print("\nEnter a Value to Find : ");
        int key = sc.nextInt();

        for(int i=0; i<n; i++)
        {
            if(arr[i] == key)
            {
                System.out.println(key + " Found at Index : " + i + ", Position : " + (i+1));
                sc.close();
                return;
            }
        }

        System.out.print(key + " is not Available in Array\n");

        sc.close();
    }
}

/*
Enter Array Size : 5
Enter Array  Values : 1 2 4 6 7
Print Array Values : 1 2 4 6 7
Enter a Value to Find : 4
4 Found at Index : 2, Position : 3

Enter a Value to Find : 5
5 is not Available in Array
*/
