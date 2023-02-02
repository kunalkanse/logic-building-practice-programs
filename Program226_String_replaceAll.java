
// replaceAll() removes all extra white spaces of string

import java.util.*;

class Program226_String_replaceAll
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        System.out.println("Entered String is : " +str);
        System.out.println("Length of String is : " +str.length());

        String str_new = str.replaceAll(" ","");

        System.out.println("new String : " +str_new);
        System.out.println("Length of trim String is : " +str_new.length());

    }
}
