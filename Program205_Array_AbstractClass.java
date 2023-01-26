
// Array input and display
// Abstract class ArrayX
// we cannot create object but can inherite this class

import java.util.*;

abstract class ArrayX   // we cannot create object but can inherite this class
{
    public int Arr[];

    public ArrayX(int size)
    {
        Arr = new int[size];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the data : ");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Data of Array : ");
        for(int i = 0; i < Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

class Program252_Array_AbstractClass
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the size of array : ");
        int size = sobj.nextInt();

        // ArrayX aobj = new ArrayX(size); cannot create object due to abstract

    }
}
