import java.util.Scanner;

public class try_catch_exception {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);    

        //Arithmatic exception
        System.out.print("Enter number 1 : ");
        int a = sc.nextInt();
        System.out.print("Enter number 2 : ");
        int b = sc.nextInt();

        try{
            double div = a / b;
            System.out.println(a + "/" + b + " = " + div);
        }
        catch(Exception e){
            System.out.println("A number can not be divided by 0");
        }

        sc.close();
    }
}
