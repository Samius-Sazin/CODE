//Interface As like as class
//constructor not possible
//Inheritance possible
//Multiple inheritance possible by interface
//all methods by defult Public + abstract
//Only can define abstract methods
//Interface variable's value can't change from anywhere

interface student{
    String name = "Sami";
    void print_student();//Add functionality in child class
};

interface alumni{
    int pass_year = 2026;
    void print_alumni();//Add functionality in child class
};

class teacher implements student, alumni{
    public void print_student(){
        System.out.println("Student...");
    }

    public void print_alumni(){
        System.out.println("Alumny...");
    }
};


public class Interface {
    public static void main(String args[]) {
        teacher T1 = new teacher();

        T1.print_student();
        T1.print_alumni();

        //Can't change interface variable value from here. can change in interface.
        // T1.name = "Akkas"; //error
        // T1.pass_year = 1000; // error
    }
}
