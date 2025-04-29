/*
Enter value of n : 4
*
**
***
****

*/

import java.util.*;
public class JAVA_3_Half_Pyramid_Pattern {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n;
        System.out.print("Enter value of n : ");
        n = sc.nextInt();

        for(int r=1; r<=n; r++)
        {
            for(int c=1; c<=r; c++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}
