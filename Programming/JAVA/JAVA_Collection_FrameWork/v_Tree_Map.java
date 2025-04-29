import java.util.TreeMap;
import java.util.HashMap;
import java.util.Map;

public class v_Tree_Map {
    public static void main(String args[]) {
        //Auto sort
        
        //declare
        TreeMap <Integer, String> TM = new TreeMap<>();



        //Insert value
        TM.put(5, "abc");
        TM.put(3, "bac");
        TM.put(7, "cab");
        TM.put(2, "aab");
        System.out.println("Tree Map :: " + TM);
        //{2=aab, 3=bac, 5=abc, 7=cab}
      




        //remove
        TM.remove(2);
        // TM.remove(2, "aab");





        //Size
        System.out.println("Tree Map Size  : " + TM.size());






        //isEmpty(), Contains
        if(!TM.isEmpty()){
            if(TM.containsKey(5)){
                System.out.println("Key 5 Corresponding value is :: " + TM.get(5));
            }

            if(TM.containsValue("abc")) {
                System.out.println("abc is available in Tree Map");
            }
        }






        //print key, value
        System.err.println("Tree Map keys :: " + TM.keySet());
        System.out.println("Tree map Values :: " + TM.values());







        //for each loop
        for(Map.Entry<Integer, String> i : TM.entrySet()){
            System.out.print("Key :: " + i.getKey() + " || Value :: " + i.getValue());
        }
        //Key :: 3 || Value :: bacKey :: 5 || Value :: abcKey :: 7 || Value :: cab
    }
}
