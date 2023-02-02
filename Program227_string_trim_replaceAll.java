
// replaceAll() removes all extra white spaces of string
// in replaceAll regular expression (Regex) is used 

import java.util.*;

class Program227_string_trim_replaceAll
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        System.out.println("Entered String is : " +str);
        System.out.println("Length of String is : " +str.length());

        String str1_new = str.trim();
        String str2_new = str1_new.replaceAll("[ ]{3,}"," ");

        System.out.println("new String : " +str2_new);
        System.out.println("Length of trim String is : " +str2_new.length());

    }
}
