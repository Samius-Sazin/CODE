/*
Enter value for n : 4
   *
  ***
 *****
*******
*******
 *****
  ***
   *

*/
import java.util.*;
public class JAVA_11_DIamond_Pattern
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter value for n : ");
        int n = sc.nextInt();

        for(int r=1; r<=n; r++)
        {
            //print spaces
            for (int space = 1; space <= n - r; space++)
            {
                System.out.print(" ");
            }
            //print stars
            for (int star = 1; star <= (2*r)-1; star++)
            {
                System.out.print("*");
            }
            System.out.println();
        }


        //print all in reverse order
        for(int r=n; r>=1; r--)
        {
            //print soaces
            for(int space=1; space<=n-r; space++)
            {
                System.out.print(" ");
            }
            //print stars
            for(int star=1;star<=(2*r)-1; star++)
            {
                System.out.print("*");
            }
            System.out.println();
        }

        sc.close();
    }
}
