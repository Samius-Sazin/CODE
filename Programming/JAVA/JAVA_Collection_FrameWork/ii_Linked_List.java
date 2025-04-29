import java.util.LinkedList;

import java.util.ListIterator;

import java.util.Collection;
import java.util.ArrayList;

public class ii_Linked_List {
    public static void main(String args[]) {
        //Declare
        LinkedList <Integer> LL = new LinkedList<>();

        //Add
        LL.add(5);
        LL.add(3);
        LL.add(7);
        LL.add(8);
        LL.add(2);
        System.out.println("Linked List is : " + LL); //[5, 3, 7, 8, 2]







        //Add first, add last
        LL.addFirst(10);
        System.out.println("\n10 added first, Linked List is : " + LL); //[10, 5, 3, 7, 8, 2]

        LL.addLast(20);
        System.out.println("\n20 added last, Linked List is : " + LL); //[10, 5, 3, 7, 8, 2, 20]






        //Add at any index
        LL.add(2, 30);
        System.out.println("\nLinked List is : " + LL); //[10, 5, 30, 3, 7, 8, 2, 20]






        //sort
        LL.sort(null);
        System.out.println("\nSorted Linked List is : " + LL); //[2, 3, 5, 7, 8, 10, 20, 30]







        //remove by index, remove by value
        LL.remove(2);//5 deleted, new list [2, 3, 7, 8, 10, 20, 30]

        LL.remove(Integer.valueOf(3)); // 3 deleted
        System.out.println("\nNew Linked List is : " + LL); //[2, 7, 8, 10, 20, 30]


        LL.removeFirst();//2 deleted
        LL.removeLast();//30 deleted
        System.err.println("\nNew Linked List : " + LL);//[7, 8, 10, 20]
        





        //Set(), replace a value
        LL.set(3, 12); //3rd index value is 20, replaced by 12
        System.out.println("\n20 replaced by 12, New Linked List : " + LL);//[7, 8, 10, 12]







        //Get any Index value
        System.out.println("\n2nd index Value :: " + LL.get(2));//2nd index Value :: 10
        System.out.println("First index Value : " + LL.getFirst());//First index Value : 7
        System.out.println("Last index Value : " + LL.getLast());//Last index Value : 12







        //indexOf(), lastIndexOf()
        System.out.println("\nIndex of Value 8 : " + LL.indexOf(8));//Index of Value 8 : 1







        //isEmpty(), Contains
        if(!LL.isEmpty()){
            if(LL.contains(10)){
                System.err.println("\n10 is available in Linked List");
            }
        }




        //Use of collection class, and addAll() method;
        Collection <Integer> C = new ArrayList<Integer>();
        C.add(2);
        C.add(3);
        C.add(4);
        System.out.println("\nCOllection : " + C);//[2, 3, 4]

        LL.addAll(C);
        LL.sort(null);
        System.out.println("\naddAll, New Linked List : " + LL);//[2, 3, 4, 7, 8, 10, 12]







        //Shallow Copy
        LinkedList <Integer> LL2 = new LinkedList<>();
        LL2 = LL;

        //Deep Copy
        // LinkedList LL3 = new LinkedList<>();
        // LL3 = (LinkedList)LL.clone();
        //or
        LinkedList <Integer> LL3 = (LinkedList<Integer>) LL.clone();








        //for each loop
        System.out.print("\n For Each Loop : ");
        for(int i : LL){
            System.out.print(i + " ");
        }





        //list Iterator
        ListIterator li = LL.listIterator(0);

        System.out.print("\nprint using List Iterator : ");
        while(li.hasNext()){
            System.out.print(li.next() + " ");
        }


        




        //clear method, Whole LL is deleted
        LL.clear();
    }
}
