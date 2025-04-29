/*
arr = 2, 4, 5, 8, 11
target = 12;
4 + 8 = 12

*/
public class Sum_of_Two_Values_in_Array {
    public static void main(String args[]) {
        int arr[] = { 2, 4, 5, 8, 11 };
        int target = 12;

        int si = 0;
        int ei = arr.length - 1;

        while (si < ei) {
            if (arr[si] + arr[ei] == target) {
                System.out.println(arr[si] + " + " + arr[ei] + " = " + target);
                return;
            }

            else if (arr[si] + arr[ei] < target) {
                si++;
            }

            else if(arr[si] + arr[ei] > target)
            {
                ei--;
            }
        }
        System.out.println("Not Found");
    }
}
