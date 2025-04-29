/*
Enter value for n : 5
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5

*/

import java.util.*;
public class JAVA_9_Number_Pyramid_Pattern
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter value for n : ");
        int n = sc.nextInt();

        for(int r=1; r<=n; r++)
        {
            //print spaces
            for(int space=1; space<=n-r; space++)
            {
                System.out.print(" ");
            }

            //print numbers
            for(int numb=1; numb<=r; numb++)
            {
                System.out.print(r + " ");
            }

            System.out.println();
        }
        sc.close();
    }
}
