import java.util.HashSet;

public class vi_Hash_Set {
    public static void main(String args[]) {

        //  get(); sort(); indexOf(); do not work
        //  same value can not add twice


        // //1. Declare
        HashSet <Integer> s1 = new HashSet<>();


        
        // //2. Add item to Set, Item Sort automatically ascending order
        s1.add(6);
        s1.add(3);
        s1.add(9);
        s1.add(5);
        System.out.println("Set s1 :: " + s1); // Set s1 :: [3, 5, 6, 9]

        // //3. Size();
        System.out.println("Set s1 size :: " + s1.size()); // Set s1 size :: 4











        // //4. contains(); [3, 5, 6, 9]
        if(s1.contains(5) == true){
            System.out.println("\n\n5 is available in s1 set");
        }










        // //5. isEmpty(); [3, 5, 6, 9]
        if(! s1.isEmpty()){
            System.out.println("\n\nS1 set is not empty");
        }








        // //6. remove(); only by object, not by index, [3, 5, 6, 9]
        s1.remove(6);
        System.out.println("\n\nSet s1 :: " + s1); // [3, 5, 9]



        




        // //7. Shallow copy, both set point to same address, changes reflects
        //s1 set = [3, 5, 9]
        HashSet <Integer> s2 = new HashSet<>();
        s2 = s1; // s2 = s1 = [3, 5, 9]
        s1.add(6); // s1 = [3, 5, 6, 9] = s2
        System.out.println("\n\nAfter Changing s1, Set s2 :: " + s2); // s2 = [3, 5, 6, 9]






        // //8. Deep copy, both set point to different address, changes doesn't reflects
        // s1 = [3, 5, 6, 9] 

        /* //Both syntex are correct
        HashSet <Integer> s3 = new HashSet<>();
        s3 = (HashSet)s1.clone();
        */
        HashSet <Integer> s3 = (HashSet<Integer>) s1.clone(); // s3 = s1 =  [3, 5, 6, 9]
        
        s1.remove(6); // s1 =  [3, 5, 9]
        System.out.println("\n\nAfter changing s1, Set s3 :: " + s3); // s3 = [3, 5, 6, 9]






        // //9. for each loop;; Set s1 :: 3 5 9
        System.out.print("\n\nSet s1 :: ");
        for(int i : s1){
            System.out.print(i + " ");
        }
        System.out.println();
    }
}

/*
Set s1 :: [3, 5, 6, 9]
Set s1 size :: 4


5 is available in s1 set


S1 set is not empty


Set s1 :: [3, 5, 9]


After Changing s1, Set s2 :: [3, 5, 6, 9]


After changing s1, Set s3 :: [9, 3, 5, 6]


Set s1 :: 3 5 9
*/