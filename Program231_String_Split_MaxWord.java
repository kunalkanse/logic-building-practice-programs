
// replaceAll() removes all extra white spaces of starting & ending of string
// in replaceAll regular expression (Regex) is used 
// nested function calll

//  split() : tokenize the string
// Display largest word of String


import java.util.*;
import java.util.random.RandomGenerator.LeapableGenerator;

class Program231_String_Split_MaxWord
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        System.out.println("Entered String is : " +str);
        System.out.println("Length of String is : " +str.length());

        String str1_new = str.trim().replaceAll("[ ]{3,}"," ");

        System.out.println("new String : " +str1_new);
        System.out.println("Length of trim String is : " +str1_new.length());

        
        String Arr[] = str1_new.split(" ");

        int iMax = Arr[0].length();
        String str_Display = null;

        for(String str_Word : Arr)
        {
            if(str_Word.length() > iMax)
            {
                iMax = str_Word.length();
                str_Display = str_Word;
            }
        }

        System.out.println("Largest word is : " +str_Display + " With length : " + str_Display.length());
    }
}
