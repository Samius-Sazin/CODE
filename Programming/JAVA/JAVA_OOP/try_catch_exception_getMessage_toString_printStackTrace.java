public class try_catch_exception_getMessage_toString_printStackTrace {
    public static void main(String args[]) {
        
        System.out.println("I am Main function");
        
        try{
            method1();
        }
        catch(ArithmeticException e){
            System.out.println("Error is : " + e.getMessage());//Error is : / by zero

            System.out.println("Error is : " + e.toString());//Error is : java.lang.ArithmeticException: / by zero
        
            e.printStackTrace();//this will show where the errors are occured, print the error message
        }
    }

    public static void method1(){
        System.out.println("I am Method 1");
        method2();//3. exception received from method2 & exception throw to Main & catch will received the exception
    }

    public static void method2(){
        System.out.println("I am Method 2");
        method3();//2. exception received from method3 & exception throw to method1
    }

    public static void method3(){
        System.out.println("I am Method 3");
        int error = 10/0;//1. exception throw to method2
    }
}

/*
I am Main function
I am Method 1
I am Method 2
I am Method 3
Error is : / by zero
Error is : java.lang.ArithmeticException: / by zero

//e.printStackTrace();
java.lang.ArithmeticException: / by zero
        at throw_exception_getMessage_toString_printStackTrace.method3(throw_exception_getMessage_toString_printStackTrace.java:30)
        at throw_exception_getMessage_toString_printStackTrace.method2(throw_exception_getMessage_toString_printStackTrace.java:25)
        at throw_exception_getMessage_toString_printStackTrace.method1(throw_exception_getMessage_toString_printStackTrace.java:20)
        at throw_exception_getMessage_toString_printStackTrace.main(throw_exception_getMessage_toString_printStackTrace.java:7)
 */