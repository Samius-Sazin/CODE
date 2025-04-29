/*
Enter Value for n : 5
    *****
   *****
  *****
 *****
*****

*/
import java.util.*;
public class JAVA_8_Pattern
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Value for n : ");
        int n = sc.nextInt();

        for(int r=1; r<=n; r++)
        {
            //print spaces
            for(int space=1; space<=n-r; space++)
            {
                System.out.print(" ");
            }

            //print stars
            for(int star=1; star<=n; star++)
            {
                System.out.print("*");
            }

            System.out.println();
        }
        
        sc.close();
    }
}
