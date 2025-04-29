public class Count_Number_of_ONE_in_a_Binary_Number {
    public static void main(String aargs[]) {

        int num = 19;
        int count = 0;

        while(num > 0)
        {
            num = num & (num -1);
            count++;
        }

        System.out.println("Total 1 in 19 = " + count);
    }
}
