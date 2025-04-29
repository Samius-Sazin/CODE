public class String_Function_1_length_charAt_substring_toUpper_toLower_replace_indexOf_lastIndexOf_contains
{
    public static void main(String args[])
    {
        String str = "Sazin Sami";

        //str.length(); Print the length of string
        System.out.println("String Length : " + str.length());//length = 10

        //str.charAt(index); print any index of that string
        System.out.println("3rd index's character : " + str.charAt(3));//3rd index character = i

        //print substring of given string
        //str.substring(beginningIndex, endingIndex); endingIndex is exclusive
        System.out.println("Substring from index 2 to 7 = " + str.substring(2, 8));//print : zin Sa
        System.out.println("Substring from index 2 to end = " + str.substring(2));//print : zin Sami

        //str.toUpperCase(); Make all character of string to upper case later
        System.out.println("Make str to Upper Case : " + str.toUpperCase());//SAZIN SAMI

        //str.toLowerCase(); Make all character of string to lower case later
        System.out.println("Make str to Lower Case : " + str.toLowerCase());//sazin sami

        //str.replace(old char, new char); Replace any index's character
        String replace = str.replace('a', 'o');
        System.out.println("Replace all 'a' by 'o' : " + replace);//replaced string = Sozin Somi

        //str.indexOf('a'); index of a character which is at the beginning
        System.out.println("'a' character index : " + str.indexOf('a'));//index = 1
        //str.indexOf('a'); index of a character which is at the last
        System.out.println("'a' character index : " + str.lastIndexOf('a'));//index = 7

        //check whether a string contains substring or not
        //str.contains(SubString); this function returns boolean value
        boolean check1 = str.contains("zin Sa"); //return true
        boolean check2 = str.contains("zin_Sa");//return false
        System.out.println("\"zin Sa\" Available in str : " + check1);
        System.out.println("\"zin_Sa\" Available in str : " + check2);

    }
}
/* 
    str = "Sazin Sami"

String Length : 10

3rd index's character : i

Substring from index 2 to 7 = zin Sa
Substring from index 2 to end = zin Sami

Make str to Upper Case : SAZIN SAMI
Make str to Lower Case : sazin sami

Replace all 'a' by 'o' : Sozin Somi

'a' character index which is at the beginning : 1
'a' character index which is at the last : 7

"zin Sa" Available in str : true
"zin_Sa" Available in str : false

 */