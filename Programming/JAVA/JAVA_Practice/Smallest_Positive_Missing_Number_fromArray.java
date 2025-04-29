/*
Eneter array Size : 6
Enter Array Elements : 0 -9 1 3 -4 5
Smallest Missing Positive Integer : 2
*/
import java.util.*;
public class Smallest_Positive_Missing_Number_fromArray {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Eneter array Size : ");
        int n = sc.nextInt();

        int max = Byte.MIN_VALUE;
        int arr[] = new int[n];
        System.out.print("Enter Array Elements : ");
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
            max = Math.max(max, arr[i]);
        }

        boolean xrr[] = new boolean[max+1];

        for(int i=0; i<n; i++)
        {
            if(arr[i] >= 0)
            {
                xrr[arr[i]] = true;
            }
        }

        for(int i=0; i<max+1; i++)
        {
            if(xrr[i] == false)
            {
                System.out.println("Smallest Missing Positive Integer : " + i);
                break;
            }
        }

        sc.close();
    }
}
