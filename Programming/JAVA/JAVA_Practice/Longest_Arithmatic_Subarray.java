import java.util.*;

public class Longest_Arithmatic_Subarray {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Array Size : ");
        int n = sc.nextInt();

        int arr[] = new int[n];
        System.out.print("Enter Array Elements : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int diff = arr[0] - arr[1];
        int si = 0;
        int count = 1;
        int max = -1;
        int ci = 0;

        for (int i = 1; i < n - 1; i++) {
            if (arr[i] - arr[i + 1] == diff) {
                count++;
            } else {
                diff = arr[i] - arr[i + 1];
                ci = i;
                count = 1;
            }
            if (count > max) {
                si = ci;
            }
            max = Math.max(count, max);
        }

        for (int i = si; i <= max + si; i++) {
            System.out.print(arr[i] + " ");
        }

        sc.close();
    }
}
