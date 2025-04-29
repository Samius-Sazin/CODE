/*
5 = 0101
pos:3210

Need to set 1 at position 1.

Final = 0111 = 7
*/

public class Set_Bit {
    public static void main(String args[]) {

        int num = 5;//0101
        int index = 1;
        int bitMask = 1 << index;

        int setBit = num | bitMask;

        System.out.println("New Num : " + setBit);
    }
}
