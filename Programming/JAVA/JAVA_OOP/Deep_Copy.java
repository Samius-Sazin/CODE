class student{
    String name;
    int roll;

    public void print(){
        System.out.println("Name : " + name);
        System.out.println("Roll : " + roll);
    }

    //in this func first I create an x obj.
    //copied s1 obj info to x obj.
    //return x obj
    public student copy_data(){
        student x = new student();
        x.name = this.name;
        x.roll = this.roll;

        return x;
    }

}


//in deep copy changes in one object does not reflect 
public class Deep_Copy {
    public static void main(String args[]){
        //create s1 object
        student s1 = new student();

        //assign value to s1 object
        s1.name = "Sami";
        s1.roll = 1236;

        //create s2 student type pointer, so s2 can only point to an student type object
        student s2;//so here s2 in a pointer

        //calling copy_data function s1 object
        //The function return an object and that is received by s2
        //here x object is returned an s2 received that
        s2 = s1.copy_data();

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
        
        /* output : here changes in s2 not reflected to s1
        After changes : 
                        s1 object : 
                        Name : Sami
                        Roll : 1236

                        s2 object : 
                        Name : Samius Sazin
                        Roll : 1236
        */

    }
}
