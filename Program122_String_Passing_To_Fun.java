
import java.util.Scanner;

// passing String to the another function

class StringDemo
{
    public void Display(String Data)
    {
        System.out.println("Welcome "+Data);
    }
}

class Program122_String_Passing_To_Fun 
{
    public static void main(String args[])
    {

        Scanner Sobj = new Scanner(System.in);
        StringDemo SDobj = new StringDemo();

        String str;

        System.out.println("Enter the String : ");
        str = Sobj.nextLine();

        SDobj.Display(str);
    }    
}
