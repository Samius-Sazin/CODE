/*
Enter Value for n : 5
    *****
   *   *
  *   *
 *   *
*****

*/
import java.util.*;
public class JAVA_8_2_Pattern
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Value for n : ");
        int n = sc.nextInt();

        for(int r=1; r<=n; r++)
        {
            //print front spaces
            for(int space=1; space<=n-r; space++)
            {
                System.out.print(" ");
            }

            //print stars
            for(int c=1; c<=n; c++)
            {
                if(r==1 || c==1 || r==n || c==n)
                {
                    System.out.print("*");
                }

                //print middle spaces
                else
                {
                    System.out.print(" ");
                }

            }

            System.out.println();
        }

        sc.close();
    }
}
