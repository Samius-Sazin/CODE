import java.util.*;
public class JAVA_1_Solid_Rectangle_Pattern {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        int row, col;
        System.out.print("Enter row & column : ");
        row = sc.nextInt();
        col = sc.nextInt();

        for(int r=0; r<row; r++){
            for(int c=0; c<col; c++){
                System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}
/*
Enter row & column : 3 4
****
****
****
*/