/*
5 = 0101
pos:3210

Need to clear bit at position 2(3rd Bit).

bitMask = 0100
final bitMask = 1011

  0101
& 1011
= 0001

Final = 0001 = 1
*/

public class Clear_Bit {
    public static void main(String args[])
    {
        int num = 5;
        int index = 2;

        int bitMask = 1 << index;
        bitMask = ~(bitMask);

        int clearBit = num & bitMask;

        System.out.println("New Num : " + clearBit);
    }
}
