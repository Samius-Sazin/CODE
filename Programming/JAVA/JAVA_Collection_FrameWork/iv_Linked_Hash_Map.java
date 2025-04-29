import java.util.LinkedHashMap;
import java.util.Map;

public class iv_Linked_Hash_Map {
    public static void main(String args[]){
        // sorting not work
        // duplicate key value not work
        LinkedHashMap <Integer, String> LHM = new LinkedHashMap<>();

        LHM.put(5, "apple");
        LHM.put(6, "bigAple");
        LHM.put(3, "smallApple");
        LHM.put(7, "app_le");
        LHM.put(6, "ap_p_le");
        System.out.println("Linked Hash Map : " + LHM); //{5=apple, 6=ap_p_le, 3=smallApple, 7=app_le}



        //remove
        LHM.remove(3);
        // LHM.remove(3, "smallApple");






        //size
        System.out.println("Linked Hash map Size L/ : " + LHM.size());




        //isEmpty(), contains
        if(!LHM.isEmpty()){
            if(LHM.containsKey(6)){
                System.out.println("6 key value is : " + LHM.get(6));
            }

            if(LHM.containsValue("apple")){
                System.out.println("Apple is available in Linked hash map");
            }
        }






        //print keys, values
        System.out.println("KEYS :: " + LHM.keySet());//[5, 6, 7]
        System.out.println("Values :: " + LHM.values()); //[apple, ap_p_le, app_le]






        //for each loop
        for(Map.Entry<Integer, String> i : LHM.entrySet()){
            System.out.print("Key :: " + i.getKey() + " || Value :: " + i.getValue());
        }
        //Key :: 5 || Value :: appleKey :: 6 || Value :: ap_p_leKey :: 7 || Value :: app_le
    }
}
