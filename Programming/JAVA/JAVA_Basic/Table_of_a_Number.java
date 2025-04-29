import java.util.*;//import a package

public class Table_of_a_Number {
    public static void main(String[] args){ //main function

        Scanner sc = new Scanner(System.in);//create scanner object named sc

        System.out.print("Enter a number : ");
        int n = sc.nextInt();

        for(int i=1; i<=10; i++)
        {
            System.out.println(n + " x " + i + " = " + n*i);
                                    //2 x 1 = 2
        }
        sc.close();
    }
}
