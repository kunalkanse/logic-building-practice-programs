
// String to String array
// count the frequency of each word of string 
// using hashmap 
// case insensitive

import java.util.HashMap;
import java.util.Scanner;

class StringClass
{
    public void wordFrequancy(String s)
    {
        String s1 = s.trim().replaceAll("[ ]{2,}"," ");

        String Arr[] = s1.split(" ");

        HashMap <String , Integer> hobj = new HashMap <String,Integer>();
        // int i = 0;

        for(String str : Arr)
        {
            if(hobj.containsKey(str.toLowerCase()))
            {
                // i = hobj.get(str.toLowerCase());
                hobj.put(str.toLowerCase(), (hobj.get(str.toLowerCase())+1));
            }
            else
            {
                hobj.put(str.toLowerCase(), 1);
            }
        }

        System.out.println("Frequency of words : ");
        System.out.println(hobj);
    }
}

public class Program237_Hashmap_WordFrequency_insensitive 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        StringClass sc = new StringClass();
        sc.wordFrequancy(str);
    }    
}

