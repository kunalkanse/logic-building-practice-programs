
// Array input and display

import java.util.*;

class Program251_Array_ip_Display
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the size of array : ");
        int size = sobj.nextInt();

        int Arr[] = new int[size];
        
        // input data
        System.out.println("Enter the data : ");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
        
        // Display Data
        System.out.println("Data of Array : ");
        for(int i = 0; i < Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }
}
