public class String_practice_2_substring
{
    public static void main(String args[])
    {               //01 3456
        String str = "Hi Sami";

        System.out.println(str.substring(3));//S to end

        //print from starting endex 3 to ending (index-1)=(7-1)=6
        //And String count start from 0, H=0, i=1......i=6.

        System.out.println(str.substring(3, 7));//S=3  to i=(7-1)=6

        System.out.println(str.substring(3, 6));//S=3 to m=(6-1)=5

        return;
    }
}
