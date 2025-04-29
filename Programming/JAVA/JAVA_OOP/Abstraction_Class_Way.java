/* ABSTRACT CLASS :

No object can be crated
Accessible by child class

can have variables
Can have constructor
Can have static method

can have both abstract or normal method
abstract method must be implement in child class
*/

abstract class student{
    public void print_abstract_student()
    {
        System.out.println("I am Abstract Class.");
        System.out.println("No obj. can be created of a abstract classs");
        System.out.println("I amm accessible by my Child Class\n\n");
    }

    //abstract public void abstract_class(); both syntex are correct
    public abstract void abstract_class();//abstract class must be implent in child class
};

class Alumni extends student{
    //implementation of abstract class
    public void abstract_class(){
        System.out.println("Abstract Class");
    }

    public void print_Alumny()
    {
        print_abstract_student();
        System.out.println("I am Child class of 'abstract student' class. Normal class.\n\n");
    }
};

public class Abstraction_Class_Way {
    public static void main(String args[]) {
        //Error, Abstract class can't have object.
        // student s1 = new student();

        //access abstract class values by its child class
        Alumni A1 = new Alumni();
        A1.print_Alumny();

        //call abstract class function
        A1.print_abstract_student();

    }
}

/*
//[A1.print_Alumny();] print those lines

I am Abstract Class.
No obj. can be created of a abstract classs
I amm accessible by my Child Class

I am Child class of 'abstract student' class. Normal class.






//[A1.print_abstract_student();] print those lines

I am Abstract Class.
No obj. can be created of a abstract classs
I amm accessible by my Child Class

*/