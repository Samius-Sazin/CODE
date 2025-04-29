/*
Enter Row & Column : 4 5
*****
*   *
*   *
*****
*/
import java.util.*;
public class JAVA_2_Holo_Rectangle_Pattern {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        int row, col;
        System.out.print("Enter Row & Column : ");
        row = sc.nextInt();
        col = sc.nextInt();

        for(int r=1; r<=row; r++)
        {
            for(int c=1; c<=col; c++)
            {
                if(r==1 || c==1 || r==row || c==col)
                {
                    System.out.print("*");
                }
                else
                {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        sc.close();
    }
}
