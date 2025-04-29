/*To access Normal variable/method we must
  create an object.

  But to use static variable/method we do not
  need any obj.

  static variable is callled as class variable.
*/

class student{
    static int roll;
}

class alumni{
    public static void print(){
        System.out.println("Alumni class");
    }
}


public class Static_Variable_Method {
    public static void main(String args[]) {
        //use static variable without using any obj.
        student.roll = 10; 
        System.out.println(student.roll);//print 10

        //use static variable using student class's object.
        student s1 = new student();
        s1.roll = 20;
        System.out.println(student.roll);//print 20

        //use static variable using another student class's object.
        student s2 = new student();
        s2.roll = 30;
        System.out.println(student.roll);//print 30

        

        /*static variable is in student class. we can not
          access it by another class. So it shows an error. */
        // alumni a1 = new alumni();
        // a1.roll = 40; //can not accessiblbe by alumni class

        alumni.print(); // print "Alumni Class"
    }
}
