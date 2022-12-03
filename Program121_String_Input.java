
import java.util.Scanner;

// String input

class Program148_String_input 
{
    public static void main(String args[])
    {

        Scanner Sobj = new Scanner(System.in);
        String str;

        System.out.println("Enter the String : ");
        str = Sobj.nextLine();

        System.out.println("Hello "+str);

    }    
}
