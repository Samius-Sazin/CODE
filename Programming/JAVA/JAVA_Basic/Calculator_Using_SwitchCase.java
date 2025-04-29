import java.util.*;
public class Calculator_Using_SwitchCase {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);//create scanner object for scan

        while(true) {
            char op;
            System.out.print("Enter Operator : ");
            op = sc.next().charAt(0);

            float num1, num2;
            System.out.print("Enter Number 1 : ");
            num1 = sc.nextFloat();//scan a float number

            System.out.print("Enter Number 2 : ");
            num2 = sc.nextFloat();//scan a float number

            switch (op) {
                case '+':
                    System.out.print("Number1 + Number2 = ");
                    System.out.println(num1 + num2);
                    break;
                case '-':
                    System.out.print("Number1 - Number2 = ");
                    System.out.println(num1 - num2);
                    break;
                case '*':
                    System.out.print("Number1 * Number2 = ");
                    System.out.println(num1 * num2);
                    break;
                case '/':
                    System.out.print("Number1 / Number2 = ");
                    System.out.println(num1 / num2);
                    break;
                default:
                    System.out.println("Wrong Operator");
            }

            char choice;
            System.out.print("Want more calculation?\nEnter 'Y' for YES, 'N' for NO : ");
            choice = sc.next().charAt(0);
            if(choice == 'N' || choice=='n')
                break;
        }
        sc.close();
    }
}
/*
Enter Operator : +
Enter Number 1 : 7
Enter Number 2 : 3
Number1 + Number2 = 10.0

Want more calculation?
Enter 'Y' for YES, 'N' for NO : y

Enter Operator : -
Enter Number 1 : 7
Enter Number 2 : 3
Number1 - Number2 = 4.0

Want more calculation?
Enter 'Y' for YES, 'N' for NO : Y

Enter Operator : *
Enter Number 1 : 7
Enter Number 2 : 3
Number1 * Number2 = 21.0

Want more calculation?
Enter 'Y' for YES, 'N' for NO : y

Enter Operator : /
Enter Number 1 : 7
Enter Number 2 : 3
Number1 / Number2 = 2.3333333

Want more calculation?
Enter 'Y' for YES, 'N' for NO : y
Enter Operator : @
Enter Number 1 : 7
Enter Number 2 : 3
Wrong Operator

Want more calculation?
Enter 'Y' for YES, 'N' for NO : n
*/
