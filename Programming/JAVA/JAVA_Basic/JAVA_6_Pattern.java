/*
Enter value for n : 5
12345
1234
123
12
1

*/

import java.util.*;
public class JAVA_6_Pattern
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
                System.out.print(c);
            }
            System.out.println();
        }
        sc.close();
    }
}
