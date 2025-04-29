import java.util.*; //package that help to scan

public class JAVA_Scan_Print {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);//Crete scanner object, name sc

        System.out.print("Enter String type data : ");
        //string name = sc.next(); //it just scan single word;
        String name = sc.nextLine();//It can scan multiple word
        System.out.println(name);

        System.out.print("Enter Integer type data : ");
        int n1;
        n1 = sc.nextInt(); //scan int type data
        System.out.println(n1);

        System.out.print("Enter Float type data : ");
        float n2 = sc.nextFloat(); //scan float type data
        System.out.println(n2);

        System.out.print("Enter Double type data : ");
        double n3 = sc.nextDouble();//scan double type data
        System.out.println(n3);

        System.out.print("Enter Char type data : ");
        char ch = sc.next().charAt(0);//scan single character or ASCII value
        System.out.println(ch);

        System.out.print("Enter Byte type data : ");
        byte n4 = sc.nextByte();//scan (-128 to 127) integer numbers
        System.out.println(n4);

        System.out.print("Enter Short type data : ");
        short n5 = sc.nextShort();//scan (-2^15 to (2^15 - 1)) integer numbers
        System.out.println(n5);

        System.out.print("Enter Long type data : ");
        long n6 = sc.nextLong();//scan (-2^63 to (2^63 - 1)) integer number
        System.out.println(n6);

        System.out.print("Enter Boolean type data : ");
        boolean bl = sc.nextBoolean();//scan true(1) or false(0)
        System.out.println(bl);

        sc.close();
    }
}
/*
Enter String type data : Samius Sazin
Samius Sazin
Enter Integer type data : 231
231
Enter Float type data : 2.5
2.5
Enter Double type data : 2.5555444433336666
2.5555444433336665
Enter Char type data : S
S
Enter Byte type data : 127
127
Enter Short type data : 215
215
Enter Long type data : 263
263
Enter Boolean type data : true
true
 */