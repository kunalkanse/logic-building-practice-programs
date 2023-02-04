
// String to character array
// count the frequency of each character of string 
// using hashmap 

import java.util.HashMap;
import java.util.Scanner;

class StringClass
{
    public void characterFrequancy(String s)
    {
        String s1 = s.replaceAll(" ", "");

        char Arr[] = s1.toCharArray();

        HashMap <Character , Integer> hobj = new HashMap <Character,Integer>();
        int i = 0;

        for(char ch : Arr)
        {
            if(hobj.containsKey(ch))
            {
                i = hobj.get(ch);
                hobj.put(ch, i+1);
            }
            else
            {
                hobj.put(ch, 1);
            }
        }

        System.out.println("Frequency of each character : " + hobj);
    }
}

public class Program235_Hashmap_CharCount 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        StringClass sc = new StringClass();
        sc.characterFrequancy(str);
    }    
}

