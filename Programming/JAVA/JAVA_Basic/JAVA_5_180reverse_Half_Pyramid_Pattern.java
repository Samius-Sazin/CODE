/*
Enter value of n : 4
   *
  **
 ***
****

*/

import java.util.*;

public class JAVA_5_180reverse_Half_Pyramid_Pattern
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter value of n : ");
        int n = sc.nextInt();

        for(int r=1; r<=n; r++)
        {
            //Print space
            for(int space=1; space<=n-r; space++)
            {
                System.out.print(" ");
            }

            //print *
            for(int star=1; star<=r; star++)
            {
                System.out.print("*");
            }

            //print new line
            System.out.println();
        }
        sc.close();
    }
}
