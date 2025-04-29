/*
Euclid Algorithm:
           X   Y
          42 % 24=18
          24 % 18=6
          18 % 6=0
          6 % 0=0 //if y=0, ANS=x
    ans = 6

Enter value for X & Y : 42 24
GCD of 42 = 6
*/

import java.util.*;
public class Function_Practice_GCD_Euclid_Algorithm
{
    public static int GCD(int x, int y)
    {
        int mod = 0;
        while(y != 0)
        {
            mod = x % y;
            x = y;
            y = mod;
        }
        return x;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter value for X & Y : ");
        int x = sc.nextInt();
        int y = sc.nextInt();

        x = x<0 ? -x : x;
        y = y<0 ? -y : y;

        //x = (x<0 ? -x : x);
        //y = (y<0 ? -y : y);

        int ans = GCD(x, y);
        System.out.println("GCD of " + x + " & " + y + " = " + ans);

        sc.close();
    }
}
