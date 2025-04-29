import java.util.Random;

public class Random_Number_Generate {
    public static void main(String args[]) {
        Random rn = new Random();

        //Return an integer type random number between 0-49
        int x = rn.nextInt(50);
        System.out.println("0 to 50 range : " + x);

        //Return an integer type random number between 50-99
        int y = rn.nextInt(50, 100);
        System.out.println("50 to 100 raange : " + y);

        //Return an integer type random number between (-2^31) to (2^31-1)
        int z = rn.nextInt();
        System.out.println("Any vlue within Integer Range : " + z);
    }
}
