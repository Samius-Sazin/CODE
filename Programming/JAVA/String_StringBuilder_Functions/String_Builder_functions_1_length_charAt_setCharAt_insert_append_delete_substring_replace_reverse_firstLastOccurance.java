public class String_Builder_functions_1_length_charAt_setCharAt_insert_append_delete_substring_replace_reverse_firstLastOccurance
{
    public static void main(String[] args)
    {
        
            //String builder is not immutable, means if we do
            //any changes in string it will reflect to sb.

            //Declare & Initialize StringBuilder type string
            StringBuilder sb = new StringBuilder("Hello");

            //1
            //sb.length(); print the length of that string
            System.out.println("StringBuilder object Length : " + sb.length());

            //2
            //sb.charAt(index); print character of any index of a string
            System.out.println("1th index's character : " + sb.charAt(1));

            //3
            //sb.setCharAt(index, char);
            //set a character by replacing the old character of an index.
            //replace 1th index character('e') by 'o'
            sb.setCharAt(1, 'o'); // "Hello" -> "Hollo"
            System.out.println("Set 'o' to 1th index : " + sb);

            //4
            //sb.append(string); add string at the end of sb.
            sb.append(" World"); //Hollo -> Hollo World
            System.out.println("Append \" World\" with \"Hello\" : " + sb);

            //5
            //sb.insert(Offset, string);
            //insert a string at any offset, And rest of the right sided substring move right
            sb.insert(6, "Sami ");//Hollo World->Hollo Sami World
            System.out.println("Insert \"Sami \" at offset 6 : " + sb);

            //6
            //sb.delete(starting index, ending index); Starting index(inclusive), ending index(exclusive)
            //Delete substring from s.i to e.i. e.i is not inlusive
            sb.delete(6, 11);//Hollo Sami World -> Hollo  World
            System.out.println("Delete from index 6(inclusive) to 11(exclusive) : " + sb);

            //7
            //String s = sb.substring(begin index, end index);
            //start index(inclusive), end index(exclusive)
            //return a substring from sb.
            String s1 = sb.substring(0, 5);//s = Hollo
            System.out.println("Substring from index 0 to 5(exclusive) :" + s1);

            String s2 = sb.substring(6);//World
            System.out.println("Substring from index 6 to end :" + s2);


            //8
            //sb.replace(Start index, end index, string);
            //s.i(inclusive), e.i(exclusive)
            //replace from s.i to e.d in (sb) by given string
            sb.replace(6, 11, "Java");//Hollo World -> Hollo Java
            System.out.println("Replace index 6 to 11(Exclusive) :" + sb);

            //9
            //sb.reverse(); reverse stringbuilder object
            sb.reverse();//Hollo World -> avaJ olloH
            System.out.println("Reverse sb : " + sb);
            sb.reverse();//avaJ olloH -> Hollo World

            //10
            //return the index of first & last occurance of string
            StringBuilder sb2 = new StringBuilder("Hello World Hello");
            //int index = sb.indexOf(String); return the index of first occurence
            int index1 = sb2.indexOf("Hello");//index1 = 0
            System.out.println("Fisrt occurance of Hello from index : " + index1);

            //int index = sb.LastIndexOf(String); return the index of first occurence
            int index2 = sb2.lastIndexOf("Hello");//index2 = 12
            System.out.println("Last occurance of Hello from index : " + index2);
    }
}
/*
  //sb = "Hello";

StringBuilder object Length : 5

1st index's character : e

Set 'o' to 1th index : Hollo

Append " World" with "Hello" : Hollo World

Insert "Sami " at offset 6 : Hollo Sami World

Delete from index 6(inclusive) to 11(exclusive) : Hollo World

Substring from index 0 to 5(exclusive) :Hollo
Substring from index 6 to end :World

Replace index 6 to 11(Exclusive) :Hollo Java

Reverse sb : avaJ olloH

Fisrt occurance of Hello from index : 0
Last occurance of Hello from index : 12
*/