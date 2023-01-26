
// LinearSearch()
// time commlexity  = n

import java.util.*;

class Searching
{
    public boolean LinearSearch(int Arr[] , int no)
    {
        boolean flag = false;

        for(int i = 0 ; i < Arr.length; i++)
        {
            if(Arr[i] == no)
            {
                flag = true;
                break;
            }
        }

        return flag;

        /* without Flag
          if(i == Arr.length)
          {
            return false;
          }
          else
          {
            return true;
          }
      */
    }
}

public class Program207_LinearSearch 
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of Array : ");
        int size = sobj.nextInt();

        int Arr[] = new int[size];

        System.out.println("Enter the Elements : ");
        for(int i = 0; i < Arr.length ; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Enter the data to search : ");
        int no = sobj.nextInt();

        Searching obj = new Searching();
        
        boolean bRet = obj.LinearSearch(Arr , no);

        if(bRet == true)
        {
            System.out.println("Element Found");
        }
        else
        {
            System.out.println("Element not Elements");
        }
    }    
}
