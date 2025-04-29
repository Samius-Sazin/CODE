public class String_Practice_3_compareTo
{
    public static void main(String args[])
    {
        String str1 = "apple";
        String str2 = "ipple";

        System.out.print(str1.compareTo(str2)); // -8
        //here str2 > str1, so negative value printed

        /*if  -->  str > str2 = +ve value
                   str1 < str2 = -ve value
                   str1 == str2 = 0
         */
    }
}
