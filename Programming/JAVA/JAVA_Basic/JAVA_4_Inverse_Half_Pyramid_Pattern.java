/*
Enter value for n : 4
****
***
**
*

*/
import java.util.*;

public class JAVA_4_Inverse_Half_Pyramid_Pattern
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter value for n : ");
        int n = sc.nextInt();

        for(int r=n; r>=1; r--)
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
