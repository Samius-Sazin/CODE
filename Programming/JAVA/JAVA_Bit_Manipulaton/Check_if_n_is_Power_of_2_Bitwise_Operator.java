public class Check_if_n_is_Power_of_2_Bitwise_Operator {
    public static void main(String args[]) {
        int num = 8;

        if(((num-1) & num) == 0)
        {
            System.out.println("Power of 2");
        }
        
        else
        {
            System.out.println("Not Power of 2");
        }
    }
}
