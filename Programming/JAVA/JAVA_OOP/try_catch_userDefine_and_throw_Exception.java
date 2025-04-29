import java.util.Scanner;

//declare user define exception class

//lass AgeNotAllowedException extends RuntimeException{
class AgeNotAllowedException extends Exception{
    AgeNotAllowedException(){
        super("Age must be greate or equal than 18");
    }

    AgeNotAllowedException(String Message){
        super(Message);
    }
}

//main classs & function
public class try_catch_userDefine_and_throw_Exception {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter age : ");
        int age = sc.nextInt();

        // try{
        //     if(age < 18){
        //         sc.close();
        //         throw new AgeNotAllowedException();//if age is <=18 then it will go to catch part | throw works as like 'return'
        //     }
        //     System.out.println("Age is : " + age);
        // }
        // catch(AgeNotAllowedException e){
        //     System.out.println("Error : " + e.getMessage());//this e.getMessege get the 'super()' value from 'AgeNotAllowedException()' constructor
        // }


        //or
        try{
            if(age < 18){
                int xx = 18-age;
                sc.close();
                throw new AgeNotAllowedException("Come back after " + xx + " years");
            }
            System.out.println("Age is : " + age);
        }
        catch(AgeNotAllowedException e){
            System.out.println("Error : " + e.getMessage());//this e.getMessege get the 'super()' value from 'AgeNotAllowedException(String Message)' constructor
        }

        sc.close();
    }
}

/*
//1st try catch
Enter age : 15
Error : Age must be greate or equal than 18

Enter age : 18
Age is : 18





//2nd try catch
Enter age : 12
Error : Come back after 6 years

Enter age : 18
Age is : 18
*/