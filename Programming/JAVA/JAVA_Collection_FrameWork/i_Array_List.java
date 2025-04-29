import java.util.ArrayList;

public class i_Array_List {
    public static void main(String args[]) {
        //1. Declare Array List
        ArrayList <Integer> AL = new ArrayList<>();







        // //2. add item + sort the arrayList
        AL.add(5);
        AL.add(3);
        AL.add(11);
        AL.add(7);
        AL.add(9);
        System.out.println("Array List Unsorted AL : " + AL); // AL : [5, 3, 11, 7, 9]
        

        // //2.1. Add item at any index (10 is added at 2nd index)
        AL.add(2, 10);
        System.out.println("Array List Unsorted AL : " + AL); // AL : [5, 3, 10, 11, 7, 9]


        // //3 : Sort
        AL.sort(null);
        System.out.println("Array List Sorted   AL : " + AL); // [3, 5, 7, 9, 10, 11]

        // //4. Get Size of Array List
        System.out.println("Size of AL :: " + AL.size()); // Size of AL :: 6
















        // //5. remove item
        AL.remove(2);//remove element from 2nd index, 7 is deleted
        System.out.println("\n\nArray List AL : " + AL); // [3, 5, 9, 10, 11]
        System.out.println("Size of AL :: " + AL.size()); // Size of AL :: 5
        
        AL.remove(Integer.valueOf(9)); // Delete the specific item, 9 is deleted
        System.out.println("\nArray List AL : " + AL); // [3, 5, 10, 11]
        System.out.println("Size of AL :: " + AL.size()); // Size of AL :: 4











        // //6. Check whether Array List is Empty or Not
        if(AL.isEmpty() == true){
            System.out.println("\n\nArrayList  AL  is EMPTY!");
        }
        if(AL.isEmpty() == false){
            System.out.println("\n\nArrayList  AL  is Not Empty!");
        }











        // //7. Check whether an item is available in ArrayList or Not ( contains )
        //Array List AL : [3, 5, 10, 11]
        if(AL.contains(Integer.valueOf(5)) == true){
            System.out.println("\n5 is available in AL");
        }
        if(AL.contains(5) == false){
            System.out.println("\n5 is not available in AL");
        }
        /* AL.contains(Integer.valueOf(5));
           AL.contains(5);
        both are same*/












        // //8. Access Element from Array List ( get ) ; Get value by index; [3, 5, 10, 11]
        System.out.println("\n\n1th Index Value : " + AL.get(1)); // 1th Index Value : 5
        System.out.println("2nd Index Value : " + AL.get(2)); //2nd Index Value : 11











        // //9. Iterating ArrayList usig for each loop
        System.out.print("\n\nAL (FOR EACH LOOP) : ");
        for(int i : AL){
            System.out.print(i + " ");
        }
        // [3, 5, 10, 11]









        // //10. indexOf(); lastIndexOf(); [3 5 10 11]
        System.out.println("\n\n\nIndex of element 5 is :: " + AL.indexOf(Integer.valueOf(5)));// Index of element 5 is :: 1

        AL.add(5); AL.add(5); AL.add(7);
        System.out.println("\nArray List AL : " + AL); // [3, 5, 10, 11, 5, 5, 7]

        System.out.println("\nLast Index of 5 is :: " + AL.lastIndexOf(Integer.valueOf(5))); // Last Index of 5 is :: 5
    
        









        // //11. Shallow COPY (Both are pointing to same address), so changes will reflect
        ArrayList <Integer> AL2 = new ArrayList<>();
        AL2 = AL; //AL = AL2 = [3, 5, 10, 11, 5, 5, 7]
        AL.remove(2);//AL = [3, 5, 11, 5, 5, 7]
        System.out.println("\n\nAL2 arrayList : " + AL2);//AL2 = [3, 5, 11, 5, 5, 7]












        // //12. Deep COPY (Both are pointing to different address), so changes will not reflect
        ArrayList <Integer> AL3 = (ArrayList <Integer>) AL.clone();
        
                           //AL = [3, 5, 11, 5, 5, 7]
        AL.remove(2);//AL = //AL = [3, 5, 5, 5, 7]

        System.out.println("\n\nAL3 arrayList : " + AL3);// AL3 = [3, 5, 11, 5, 5, 7]
    }
}
/*
Array List Unsorted AL : [5, 3, 11, 7, 9]
Array List Unsorted AL : [5, 3, 10, 11, 7, 9]
Array List Sorted   AL : [3, 5, 7, 9, 10, 11]
Size of AL :: 6


Array List AL : [3, 5, 9, 10, 11]
Size of AL :: 5

Array List AL : [3, 5, 10, 11]
Size of AL :: 4


ArrayList  AL  is Not Empty!

5 is available in AL


1th Index Value : 5
2nd Index Value : 10


AL (FOR EACH LOOP) : 3 5 10 11


Index of element 5 is :: 1

Array List AL : [3, 5, 10, 11, 5, 5, 7]

Last Index of 5 is :: 5


AL2 arrayList : [3, 5, 11, 5, 5, 7]


AL3 arrayList : [3, 5, 11, 5, 5, 7]
*/