

// BinarySearch()
// Data must be sorted

import java.util.*;

class Searching
{
    public boolean BinarySearch(int Arr[] , int no)
    {
        int start,end,mid;

        start = 0;
        end = Arr.length-1;
        mid = (start+end) / 2;

        boolean flag = false;

        if(Arr[end] >= Arr[start])  // if data is sorted in increasing order
        {
            while(start <= end)
            {
                if(Arr[mid] == no)
                {
                    flag = true;
                    break;
                }
                else if(no > Arr[mid])
                {
                    start = mid + 1;
                }
                else if(no < Arr[mid])
                {
                    end = mid - 1;
                }

                mid = (start + end) / 2; 
            }
        }
        else    // if data is sorted in decreasing order
        {
            while(start <= end)
            {
                if(Arr[mid] == no)
                {
                    flag = true;
                    break;
                }
                else if(no < Arr[mid])
                {
                    start = mid + 1;
                }
                else if(no > Arr[mid])
                {
                    end = mid - 1;
                }

                mid = (start + end) / 2; 
            }
        }

        return flag; 
/*
        // without Flag  
        if(Arr[mid] == no)
		{
			return true;
		}
		else
		{
			return false;
		}
*/
    }
}

public class Program208_BinarySearch 
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
        
        boolean bRet = obj.BinarySearch(Arr , no);

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
