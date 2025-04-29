/*
Enter Value for n : 4
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/

import java.util.*;
public class JAVA_7_Butterfly_Pattern
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Value for n : ");
        int n = sc.nextInt();

        for(int r=1; r<=n; r++)
        {
            //print star
            for(int star=1; star<=r; star++)
            {
                System.out.print("*");
            }

            //print space
            for(int space=1; space<=2*(n-r); space++)
            {
                System.out.print(" ");
            }

            //print star
            for(int star=1; star<=r; star++)
            {
                System.out.print("*");
            }

            System.out.println();
        }

        //print reversed way
        for(int r=n; r>=0; r--)
        {
            //print star
            for(int star=1; star<=r; star++)
            {
                System.out.print("*");
            }

            //print spaces
            for(int space=1; space<=2*(n-r); space++)
            {
                System.out.print(" ");
            }

            //print star
            for(int star=1; star<=r; star++)
            {
                System.out.print("*");
            }

            System.out.println();
        }

        sc.close();
    }
}
