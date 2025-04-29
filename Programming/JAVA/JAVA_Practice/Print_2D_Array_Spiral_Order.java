/*
2D - Matrix, Print Values in Spiral Order
(3X3)
1  2  3
8  9  4
7  6  5

Spiral Order :
1 2 3
4 5
6 7
8
9

*/

import java.util.*;
public class Print_2D_Array_Spiral_Order {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter value of ROW & COLUMN : ");
        int n = sc.nextInt();
        int arr[][] = new int[n][n];

        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                System.out.print("Array[" + r + "][" + c + "] : ");
                arr[r][c] = sc.nextInt();
            }
            System.out.println();
        }

        int top = 0;
        int down = n - 1;
        int left = 0;
        int right = n - 1;

        int direction = 0;

        while (top <= down && left <= right) {
            if (direction == 0) {
                for (int i = left; i <= right; i++) {
                    System.out.print(arr[top][i] + " ");
                }
                top++;
            } else if (direction == 1) {
                for (int i = top; i <= down; i++) {
                    System.out.print(arr[i][right] + " ");
                }
                right--;
            } else if (direction == 2) {
                for (int i = right; i >= left; i--) {
                    System.out.print(arr[right][i] + " ");
                }
                down--;
            } else if (direction == 3) {
                for (int i = down; i >= top; i--) {
                    System.out.print(arr[i][left] + " ");
                }
                left++;
            }

            direction++;
            if (direction == 4) {
                direction = 0;
            }

            System.out.println();
        }

        sc.close();
    }

}