/*
Enter Array Size : 6
Enter Array Elements : -1 2 4 -7 3 2
Maximum Subarray Sum = 6
*/
import java.util.*;
public class Kedanes_Algorithm_Mximum_Subarray_Sum {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Array Size : ");
        int n = sc.nextInt();

        int arr[] = new int[n];
        System.out.print("Enter Array Elements : ");
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
        }

        int currentSum = 0;
        int maxSum = Byte.MIN_VALUE;
        for(int i=0; i<n; i++)
        {
            currentSum += arr[i];
            if(currentSum < 0)
            {
                currentSum = 0;
            }
            maxSum = Math.max(maxSum, currentSum);
        }

        System.out.println("Maximum SubArray Sum : " + maxSum);

        sc.close();
    }
}
