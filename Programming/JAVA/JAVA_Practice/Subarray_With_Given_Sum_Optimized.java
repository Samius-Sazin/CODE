import java.util.*;

public class Subarray_With_Given_Sum_Optimized {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Sum Value : ");
        int sum = sc.nextInt();

        System.out.print("Enter Array SIze : ");
        int n = sc.nextInt();

        int arr[] = new int[n];
        System.out.print("Enter Array Element : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int current_sum = 0;
        int i = 0, j = 0;

        while (i < n) {
            current_sum += arr[j];
            while (current_sum > sum && i < n) {
                current_sum -= arr[i];
                i++;
            }

            if (current_sum == sum) {
                System.out.println("Sum Found from index " + i + " to " + j);
                break;
            }
            j++;
        }

        if (current_sum != sum) {
            System.out.println("Sum not Found");
        }

        sc.close();
    }
}