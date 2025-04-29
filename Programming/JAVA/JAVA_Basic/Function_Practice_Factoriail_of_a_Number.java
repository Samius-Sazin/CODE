/*
Enter an Integer Number : 5
5! = 120

Enter an Integer Number : -5
-5! is not possible.
*/
import java.util.*;
public class Function_Practice_Factoriail_of_a_Number
{
    public static int Factorial_of_a_Number(int n)
    {
        if(n == 0)
        {
            return 1;
        }

        else if(n < 0)
        {
            return -1;
        }

        else
        {
            int fact = 1;
            for(int i=n; i>=2; i--)
            {
                fact *= i;
            }
            return fact;
        }
    }


    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter an Integer Number : ");
        int n = sc.nextInt();

        int ans = Factorial_of_a_Number(n);

        if(ans == -1)
        {
            System.out.print(n + "! is not possible.");
        }
        else
        {
            System.out.print(n+ "! = " +ans);
        }

        sc.close();
    }
}
