
// String to String array
// Display word which has maximum frequency
// using hashmap 

import java.util.HashMap;
import java.util.Scanner;
import java.util.Set;

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

        Set <String> sobj = hobj.keySet();
        int iMax = 0;
        String output = null;

        System.out.println("Duplicate words from string : ");

        for(String word : Arr)
        {
            if(hobj.get(word) > 1)
            {
                output = word;
                iMax = hobj.get(word);
            }
        }

		System.out.println(output+" word occurs maximum number of times i.e : "+iMax);

    }
}

public class Program240_Hashmap_MaxFreqWord 
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

