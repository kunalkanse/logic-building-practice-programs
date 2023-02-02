
// trim() removes extra white spaces of starting & ending of string

import java.util.*;

class Program225_String_trim
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        System.out.println("Entered String is : " +str);
        System.out.println("Length of String is : " +str.length());

        String str_trim = str.trim();

        System.out.println("new String : " +str_trim);
        System.out.println("Length of trim String is : " +str_trim.length());

    }
}
