//package for BigIntegr
import java.math.BigInteger;

public class Big_Integer {
    public static void main(String args[]) {

        //pass a too big integer as a String to biginteger Function
        BigInteger bi1 = new BigInteger("123456789876543213456789");
        System.out.println(bi1);

        //if integer is not too big then pass the integer
        BigInteger bi2 = BigInteger.valueOf(1234567899L); 
        System.out.println(bi2);
        
        //others
        BigInteger bi3 = BigInteger.ZERO;//bi3 = 0
        BigInteger bi4 = BigInteger.ONE;//bi4 = 1;
        BigInteger bi5 = BigInteger.TWO;//bi5 = 2
        BigInteger bi6 = BigInteger.TEN;//bi6 = 10
        System.out.println(bi3 +" "+ bi4 +" "+ bi5 +" "+ bi6);
    
        //Operations
        BigInteger BI1 = new BigInteger("100");
        BigInteger BI2 = BigInteger.valueOf(10);

        //1 multiply
        BigInteger MULTIPLY_1 = BI1.multiply(BI2);//pass another bigInteger
        System.out.println("\n multiply_1 (100 * 10) = " + MULTIPLY_1);

        BigInteger MULTIPLY_2 = BI1.multiply(new BigInteger("20"));//pass string
        System.out.println(" multiply_2 (100 * 20) = " + MULTIPLY_2);

        BigInteger MULTIPLY_3 = BI1.multiply(BigInteger.valueOf(30));
        System.out.println(" multiply_3 (100 * 30) = " + MULTIPLY_3);

        //2 add
        BigInteger ADD_1 = BI1.add(new BigInteger("50"));
        System.out.println("\n add (100 + 50) = " + ADD_1);
    
        //3 div
        BigInteger DIVIDE_1 = BI1.divide(new BigInteger("5"));
        System.out.println("\n divide (100 / 10) = " + DIVIDE_1);

        //4 mod
        BigInteger MOD_1 = BI2.mod(new BigInteger("3"));
        System.out.println("\n mod (10 % 3) = " + MOD_1);

        //add, divide, mmulti
        BigInteger ALL = BI1.add(new BigInteger("10")).multiply(new BigInteger("5")).divide(new BigInteger("10"));
        System.out.println("\n add, multiply, divide (((100 + 10) * 5) / 10) = " + ALL);



        //condition if(numb % 2 == 0) print(EVEN)
        BigInteger numb = new BigInteger("1234");

        if(numb.mod(BigInteger.valueOf(2)).equals(BigInteger.ZERO))
        {
            System.out.println("\n EVEN (1234 % 2 == 0)");
        }

        // if(numb.mod(BigInteger.valueOf(2)) == BigInteger.ZERO)
        // {
        //     System.out.println("\n EVEN (1234 % 2 == 0)");
        // }



        //condition if(num % 2 != 0) print(ODD)
        BigInteger num = new BigInteger("12345");

        if((num.mod(BigInteger.valueOf(2))).equals(BigInteger.ONE))
        {
            System.out.println("\n ODD (12345 % 2 != 0) \n");
        }

        // if(num.mod(BigInteger.valueOf(2)) != BigInteger.ZERO)
        // {
        //     System.out.println("\n ODD (12345 % 2 != 0) \n");
        // }


        //two condition if(NUM==0 && NUM!=1) print();
        BigInteger NUM = new BigInteger("0");

        if(NUM.equals(BigInteger.ZERO) && !NUM.equals(BigInteger.ONE))
        {
            System.out.println("NUM = 1");
        }

    }
}
