class student
{
    student()
    {
        System.out.println("Defult Student Constructor called");
    }

    student(int numb)
    {
        System.out.println("Parameterized Student Constructor value : " + numb);
    }
}

class Alumni extends student
{
    Alumni()
    {
        //Only one parent constructor can be called from student constructor
        //That means only one super(); keyword can use in one Child constructor

        //super(); keyword must write before all other operations of the child constructor

        //If we do not write anythinng 'super();' will be called automatically

        //super();//This line call the defult student constructor
        System.out.println("Defult Alumni Constructor called");
    }

    Alumni(int integer)
    {
        super(100);//This line call the parameterized student constructor
        System.out.println("Parameterized Alumni Constructor Value : " + integer);
    }
}


public class Super_keyword_With_Constructor {
    public static void main(String args[]){

        //This line call the defult alumni constructor
        Alumni a1 = new Alumni();

        /* output :
                Defult Student Constructor called
                Defult Alumni Constructor called
         */




        System.out.println();
        
        //This line call the parameterized alumni constructor
        Alumni a2 = new Alumni(12345);

        /* output :
                Parameterized Student Constructor value : 100
                Parameterized Alumni Constructor Value : 12345
         */




        //this line is only for avoid the suggessions
        System.out.println("\n\n\n" + a1 + " " + a2);
    }
}
