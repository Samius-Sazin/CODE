/*
jagged[0][0] = 1
jagged[0][1] = 2

jagged[1][0] = 3
jagged[1][1] = 4
jagged[1][2] = 5
jagged[1][3] = 6
jagged[1][4] = 7

jagged[2][0] = 8
jagged[2][1] = 9
jagged[2][2] = 0

1 2
3 4 5 6 7
8 9 0
*/
import java.util.*;
public class JAGGED_2D_Array_Practice
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        //declare 2d array with row size 3
        int jagged[][] = new int[3][];

        //Initialize row size
        jagged[0] = new int[2];//row 0 has 3 column
        jagged[1] = new int[5];//row 1 has 5 column
        jagged[2] = new int[3];//row 2 has 3 column

        for(int r=0; r<jagged.length; r++)
        {
            for(int c=0; c<jagged[r].length; c++)
            {
                System.out.print("jagged[" + r + "][" + c + "] = ");
                jagged[r][c] = sc.nextInt();
            }
        }

        for(int r=0; r<jagged.length; r++)
        {
            for(int c=0; c<jagged[r].length; c++)
            {
                System.out.print(jagged[r][c] + " ");
            }
            System.out.println();
        }

        sc.close();
    }

}
