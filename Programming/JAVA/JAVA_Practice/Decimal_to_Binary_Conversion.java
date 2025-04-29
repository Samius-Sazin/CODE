//Decimal(46) = Binary = (11101)

import java.util.*;
public class Decimal_to_Binary_Conversion
{
    public static int dec_to_bin(int n)
    {
        int x=1;
        StringBuilder sb = new StringBuilder("");
        int ans = 0;
        while(n>=x) x*=2;
        x/=2;
        while(x >= 1)
        {
            if(ans+x <= n)
            {
                sb.append("1");
                ans += x;
            }
            else
            {
                sb.append("0");
            }
            x/=2;
        }
        sb.reverse();
        String str = sb.toString();
        return Integer.parseInt(str);
    }
    
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println("Decimal("+n+") = " + "Binary = (" + dec_to_bin(n)+")");

        sc.close();
    }
}