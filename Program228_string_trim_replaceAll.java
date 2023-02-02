
// replaceAll() removes all extra white spaces of starting & ending of string
// in replaceAll regular expression (Regex) is used 
// nested function call

import java.util.*;

class Program228_string_trim_replaceAll
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

    }
}
