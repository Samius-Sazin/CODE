/*
Enter Name : Samius Sazin
S a m i u s   S a z i n
Enter Another Name : Rakib
Add name 1 & name 2 : Samius Sazin Rakib
*/
import java.util.*;
public class String_Practice_1_Print_Each_Character
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Name : ");
        String name1 = sc.nextLine();//take string input

        for(int i=0; i<name1.length(); i++)
        {
            System.out.print(name1.charAt(i) + " ");
        }

        System.out.print("\nEnter Another Name : ");
        String name2 = sc.nextLine();

        String concatenation = name1 + " " + name2;
        System.out.print("Add name 1 & name 2 : " + concatenation);
        
        sc.close();
    }
}
