/*
Enter value for n : 5
    1
   212
  32123
 4321234
543212345

*/

import java.util.*;
public class JAVA_10_Palindromic_Pattern
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

            //print 1st halfnumbers
            for(int numb=r; numb>=1; numb--)
            {
                System.out.print(numb);
            }

            //print 2nd half numb
            for(int numb = 2; numb<=r; numb++)
            {
                System.out.print(numb);
            }

            System.out.println();
        }
        sc.close();
    }
}
