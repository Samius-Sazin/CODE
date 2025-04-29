/*
5 = 0101
pos=3210

2nd position Bit = 1
3rd position bit = 0
*/

public class Get_Bit {
    public static void main(String args[]) {

        int num = 5;
        int index = 2;
        int bitMask = 1 << index;

        if ((num & bitMask) == 0) {
            System.out.println("Bit is ZERO");
        }

        else {
            System.out.println("Bit is ONE");
        }
    }

}
