import java.util.Scanner;

//class AgeNotAllowedException extends RuntimeException{
class AgeNotAllowedException extends Exception{
    AgeNotAllowedException(){
        super(" Age is less then 18");
    }
}

public class try_catch_userDefine_and_throw_Exception2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter age : ");
        int age = sc.nextInt();

        try{
            checkAge(age);

            System.out.println("Age = " + age);
        }
        catch(AgeNotAllowedException e){
            System.out.println("Error : " + e.getMessage()); // Error :  Age is less then 18
            System.out.println(e.toString()); // AgeNotAllowedException:  Age is less then 18
        }

        sc.close();
    }

    public static void checkAge(int age) throws AgeNotAllowedException {
        if(age < 18) {
            throw new AgeNotAllowedException();
        }
    }
}

/*
//for exception case
Enter age : 12
Error :  Age is less then 18
AgeNotAllowedException:  Age is less then 18


//for no exception case
Enter age : 18
Age = 18
*/