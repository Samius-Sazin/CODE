import java.util.HashMap;
import java.util.Map;

public class iii_Hash_Map {
    public static void main(String args[]) {
        // // Declare
        HashMap <Integer, String> m1 = new HashMap<>();


        
        // //1. add item (key, value), sort automatically by key
        // cant have same kew twice, 2nd keyValue replace the 1st one
        m1.put(5, "Lemon");
        m1.put(5, "Appale");
        m1.put(3, "Banana");
        m1.put(9, "Guava");
        System.out.println("Map m1 :: " + m1); // Map m1 :: {3=Banana, 5=Appale, 9=Guava}

        System.out.println("Map m1 size : " + m1.size()); // Map m1 size : 3
        System.out.println("\n");













        
        // //2. For each loop,,,  print key & value
        for(Map.Entry<Integer, String> i : m1.entrySet()){
            System.out.println("Key :: " + i.getKey() + " || Value :: " + i.getValue());
        }
        /*  Key :: 3 || Value :: Banana
            Key :: 5 || Value :: Appale
            Key :: 9 || Value :: Guava  */













        System.out.println("\n");
        // //3. empty, contains, get ;; {3=Banana, 5=Appale, 9=Guava}
        if(! m1.isEmpty()){

            //HashMap_Object_Name.get(key);
            if(m1.containsKey(5)){
                System.out.println("Key 5 corresponding value :: " + m1.get(5));
            }



            //iterator.getKey(), iterator.getValue()
            if(m1.containsValue("Guava")){
                for(Map.Entry<Integer, String> i : m1.entrySet()){
                    if(i.getValue().compareTo("Guava") == 0){
                        System.out.println("Value \"Guava\" key  :: " + i.getKey());
                    }
                }
            }
        }
        /*  Key 5 corresponding value :: Appale
            Value "Guava" key  :: 9 */
















        // // 4. print the keys only,, print the values only
        System.out.println("\n\nMap m1 keys are :: " + m1.keySet());
        System.out.println("Map m1 values :: " + m1.values());
        /*  Map m1 keys are :: [3, 5, 9]
            Map m1 values :: [Banana, Appale, Guava] */















        
        // //5. remove(key); delete key & correseponding value
        m1.remove(5); // 5=Apple is deleted
        System.out.println("\n\nMap m1 :: " + m1); // Map m1 :: {3=Banana, 9=Guava}












        // //6. Delete Whole map
        m1.clear();
        System.out.println("\n\nMap m1 size :: " + m1.size()); // Map m1 size :: 0 

    }
}

/*
Map m1 :: {3=Banana, 5=Appale, 9=Guava}
Map m1 size : 3


Key :: 3 || Value :: Banana
Key :: 5 || Value :: Appale
Key :: 9 || Value :: Guava


Key 5 corresponding value :: Appale
Value "Guava" key  :: 9


Map m1 keys are :: [3, 5, 9]
Map m1 values :: [Banana, Appale, Guava]      


Map m1 :: {3=Banana, 9=Guava}


Map m1 size :: 0
*/