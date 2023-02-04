
// String to String array
// count the frequency of each word of string 
// using hashmap 

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
            if(hobj.containsKey(str))
            {
                // i = hobj.get(str);
                hobj.put(str, (hobj.get(str)+1));
            }
            else
            {
                hobj.put(str, 1);
            }
        }

        System.out.println("Frequency of words : ");
        System.out.println(hobj);
    }
}

public class Program236_Hashmap_WordFrequency 
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

