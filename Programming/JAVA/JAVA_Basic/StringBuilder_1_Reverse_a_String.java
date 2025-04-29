public class StringBuilder_1_Reverse_a_String
{
    public static void main(String args[])
    {
        StringBuilder str = new StringBuilder("Sazin Sami");

        for(int i=0; i<str.length()/2; i++)
        {
            int first = i;
            int last = str.length() - (i+1);

            char first_char = str.charAt(first);
            char last_char = str.charAt(last);

            str.setCharAt(first, last_char);
            str.setCharAt(last, first_char);
        }
        System.out.println("Reversed : " + str);
    }
}