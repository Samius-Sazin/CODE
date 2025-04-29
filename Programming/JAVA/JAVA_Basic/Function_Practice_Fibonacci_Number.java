/*
Enter position : 6
0 1 1 2 3 5 8

Enter position : -6
Invalid Position

*/

import java.util.*;
public class Function_Practice_Fibonacci_Number
{
    public static void Fib_nth_position(int pos)
    {
        if(pos < 0)
        {
            System.out.println("Invalid Position");
            return;
        }

        int f1 = 0;
        int f2 = 1;
        int fib;
        for(int i=0; i<=pos; i++)
        {
            System.out.print(f1 + " ");
            fib = f1+f2;
            f1 = f2;
            f2 = fib;

        }
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter position : ");
        int pos = sc.nextInt();

        Fib_nth_position(pos);

        sc.close();
    }
}
