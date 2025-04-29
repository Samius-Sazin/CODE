import java.util.LinkedHashSet;

public class vii_LinkedHashSet {
    public static void main(String args[]) {
        //Not auto sort + sort do not work
        
        //Declare
        LinkedHashSet <Integer> LHS = new LinkedHashSet<>();




        //Add
        LHS.add(5);
        LHS.add(3);
        LHS.add(9);
        LHS.add(2);
        System.out.println("Linked Hash Set : " + LHS);//[5, 3, 9, 2]




        //Remove
        LHS.remove(2);







        //contains, isEmpty()
        if(!LHS.isEmpty()){
            if(LHS.contains(5)){
                System.out.println("5 is available in Linked HAsh Set");
            }
        }






        //fro each loop
        for(int i : LHS){
            System.out.print(i + " ");
        }
    }
}
