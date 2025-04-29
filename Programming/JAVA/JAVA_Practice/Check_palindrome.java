import java.util.*;
public class Check_palindrome {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a String : ");
        String str = sc.nextLine();

        for(int i=0; i<str.length()-1; i++)
        {
            if(str.charAt(i) != str.charAt(str.length()-1-i))
            {
                System.out.println(str + " is Not Palindrome");
                sc.close();
                return;
            }
        }
        System.out.println(str + " is Palindrome");

        sc.close();
    }
}
