
// String to character array

import java.util.Scanner;

class StringClass
{
    public void characterArray(String s)
    {
        String s1 = s.replaceAll(" ", "");

        char Arr[] = s1.toCharArray();

        System.out.print("Character Array : ");
        for(char ch : Arr)
        {
            System.out.print(ch + " ");
        }
    }
}

public class Program234_String_toCharArray 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        StringClass sc = new StringClass();
        sc.characterArray(str);
    }    
}
