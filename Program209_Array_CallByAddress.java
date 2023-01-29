 
// Demonstrate change in array
// in java, normal call by name work as call by address

import java.util.*;

class Searching
{
    public void Change(int Brr[])
    {
        for(int i = 0; i < Brr.length ; i++)
        {
            Brr[i]++;
        }
    }
}


public class Program209_Array_CallByAddress 
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

        Searching obj = new Searching();

        obj.Change(Arr);

        System.out.println("Data After function call : ");
        for(int i = 0; i <Arr.length ; i++)
        {
            System.out.println(Arr[i]);
        }
    } 
}
