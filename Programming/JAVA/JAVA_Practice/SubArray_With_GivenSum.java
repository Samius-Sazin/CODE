import java.util.*;

public class SubArray_With_GivenSum {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Sum Value : ");
        int sum = sc.nextInt();

        System.out.print("Enter Array Size : ");
        int n = sc.nextInt();

        int arr[] = new int[n];
        System.out.print("Enter Array Element : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int current_sum = 0;
        int i = 0;
        int j = 0;
        for (i = 0; i < arr.length; i++) {
            current_sum = 0;
            for (j = i; j < arr.length; j++) {
                current_sum += arr[j];
                if (current_sum > sum) {
                    break;
                }
                if (current_sum == sum) {
                    for (int k = i; k <= j; k++) {
                        System.out.print(arr[k] + " ");
                    }
                    sc.close();
                    return;
                }
            }
        }
        System.out.println("Not found !!");

        sc.close();
    }

}
