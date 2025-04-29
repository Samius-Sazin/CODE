class student{
    String name;
    int roll;

    public void print(){
        System.out.println("Name : " + name);
        System.out.println("Roll : " + roll);
    }

}

//in shallow copy changes reflect in both object as they are pointing to the same location
public class Shallow_Copy {
    public static void main(String args[]){

        //create s1 object
        student s1 = new student();

        //assign value to s1 object
        s1.name = "Sami";
        s1.roll = 1236;

        //create s2 student type pointer, so s2 can only point to an student type object
        student s2;//so here s2 in a pointer

        //that does not means, all values of s1 copied to s2.
        //that means now s2 is pointing to the same object that is already pointed by s1
        //So no if we make any changes to s2, it will reflect to s1
        //or if we make any changes to s1, it will reflect to s2
        s2 = s1;

        //print data by s1 & s2 obj.
        System.out.println("Before changes : ");
        System.out.println("s1 object : ");
        s1.print();

        System.out.println("\ns2 object : ");
        s2.print();

        /* output :
        Before changes : 
                        s1 object : 
                        Name : Sami
                        Roll : 1236

                        s2 object : 
                        Name : Sami
                        Roll : 1236
        */



        //make some changes in s2 obj
        s2.name = "Samius Sazin";

        //print again s1 & s2 data
        System.out.println("\nAfter changes : ");
        System.out.println("s1 object : ");
        s1.print();

        System.out.println("\ns2 object : ");
        s2.print();
        
        /* output :
        After changes : 
                        s1 object : 
                        Name : Samius Sazin
                        Roll : 1236

                        s2 object : 
                        Name : Samius Sazin
                        Roll : 1236
        */

    }
}
