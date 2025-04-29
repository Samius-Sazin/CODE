/*
5 = 0101
pos:3210

Part 1: pos = 1, Operation = 0;(0 to 1)
        Final : 0111 = 7

Part 1: pos = 2, Operation = 1;(1 to 0)
        Final : 0001 = 1

*/

public class Update_Bit {
        public static void main(String args[]) {
                int num = 5;// 0101
                int index = 2;
                int op = 0;

                int bitMask = 1 << index;

                // check if the 2nd index bit of 5 is 0 or 1
                int getBit = num & bitMask;

                if (op == 0) {
                        if (getBit == 0) // that means bit is zero
                        {
                                // as bit is 0, no need to change
                                System.out.println("Bit is already ZERO, No need to Change");
                        }

                        else // that means bit is one
                        {
                                bitMask = ~(bitMask);
                                int newNum = num & bitMask;
                                System.out.println("Bit was ONE, Changed to ZERO");
                                System.out.println("New Number : " + newNum);
                        }

                }

                else if (op == 1) {
                        if (getBit == 0) // that means bit is zero
                        {
                                int newNumb = num | bitMask;
                                System.out.println("Bit was ZERO, Changed to ONE");
                                System.out.println("New Number : " + newNumb);
                        }

                        else // that means bit is one
                        {
                                // as bit is 1, no need to change
                                System.out.println("Bit is already ONE, No need to change");
                        }
                }

        }
}
