public class String_function_2_trim_isEmpty_equals_equalsIgnoreCase_startsWith_EndsWith
{
    public static void main(String args[])
    {
        //str.trim(); function delete the front and rear spaces of a string
        String str1 = "  Saz in  Sami !     ";
        str1 = str1.trim();
        System.out.println("Trimed String :\"" + str1 +"\"");

        //str.isEmpty(); check whether a string is empty or not
        //It return boolean value
        String str2 = "";
        String str3 = "Hello";
        boolean check1 = str2.isEmpty();
        boolean check2 = str3.isEmpty();
        System.out.println("str2 is empty : " + check1);
        System.out.println("str3 is empty : " + check2);

        //Check 2 string equal or not
        //return boolean value
        String str4 = "Hello";
        String str5 = "hello";
        //str1.equals(str2); check whether str2 is equal to str1 or not, Upper-Lower case matters
        System.out.println("str5 is equal to str4 : " + str4.equals(str5));
        //str1.equalsIgnoreCase(str2); Upper-Lower case does't matters
        System.out.println("str5 is equal to str4 (ignoreCase): " + str4.equalsIgnoreCase(str5));
        

        String str = "Samius Sazin";
        //check if a string starts/ends with specified substring
        //return boolean value
        //str.startsWith(string);
        System.out.println("Samius Sazin starts with (Sami) : " + str.startsWith("Sami"));
        System.out.println("Samius Sazin starts with (sami) : " + str.startsWith("sami"));
        System.out.println("Samius Sazin starts with (S) : " + str.startsWith("S"));
        System.out.println("Samius Sazin starts with (amiu) : " + str.startsWith("amiu"));
        //str.startsWith(string);
        System.out.println("Samius Sazin ends with (Sazin) : " + str.endsWith("Sazin"));
        System.out.println("Samius Sazin ends with (zin) : " + str.endsWith("zin"));
        System.out.println("Samius Sazin ends with (n) : " + str.endsWith("n"));
        System.out.println("Samius Sazin ends with (Azin) : " + str.endsWith("Azin"));

    }
}
/*
  //String str1 = "  Saz in  Sami !     ";
Trimed Str1 :"Saz in  Sami !"

  //String str2 = "";
  //String str3 = "Hello";
str2 is empty : true
str3 is empty : false

  //String str4 = "Hello";
  //String str5 = "hello";
str5 is equal to str4 : false
str5 is equal to str4 (ignoreCase): true

  //String str = "Samius Sazin";
"Samius Sazin" starts with "Sami" : true
"Samius Sazin" starts with "sami" : false
"Samius Sazin" starts with "S" : true
"Samius Sazin" starts with "ami" : false

"Samius Sazin" ends with "Sazin" : true
"Samius Sazin" ends with "zin" : true
"Samius Sazin" ends with "n" : false
"Samius Sazin" ends with "Azin" : false
*/