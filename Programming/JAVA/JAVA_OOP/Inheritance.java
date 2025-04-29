//parent class
class student{
    String name;
    int age;
    int roll;
    public void print()
    {
        System.out.println("Name : " + name);
        System.out.println("Age : " + age);
        System.out.println("Roll : " + roll);
    }
};

//inherit from student class
//Child class
class Alumni extends student{
    int graduationYear;
    String jobType;

    public void print()
    {
        super.print();//access parent class print func.
         
        System.out.println("Graduation Year : " + graduationYear);
        System.out.println("Job Type : " + jobType);
    }
};

public class Inheritance{
    public static void main(String args[]) {
        Alumni a1 = new Alumni();

        a1.name = "Samius Sazin";
        a1.age = 25;
        a1.roll = 1236;

        a1.graduationYear = 2026;
        a1.jobType = "Software Engineer";

        a1.print();
    }
}