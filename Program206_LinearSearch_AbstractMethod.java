
// Searching
// Abstract Array class input and display
// abstract array can contains 0 or more abstract methods

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

    public abstract boolean LinearSearch(int no); // Abstract method
}

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////

class Searching extends ArrayX
{
    public Searching(int size)
    {
        super(size);
    }

    public boolean LinearSearch(int no)   // concreate method
    {
        int i = 0;
        for(i = 0; i < Arr.length ; i++)
        {
            if(Arr[i] == no)
            {
                break;
            }
        }

        if(i == Arr.length)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////

class Program206_LinearSearch_AbstractMethod
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the size of array : ");
        int size = sobj.nextInt();

        // ArrayX aobj = new ArrayX(size); cannot create object due to abstract

        Searching obj = new Searching(size);

        obj.Accept();

        System.out.println("Enter the number to search : ");
        int no = sobj.nextInt();

        boolean bRet = obj.LinearSearch(no);

        if(bRet == true)
        {
            System.out.println("Element Fount");
        }
        else
        {
            System.out.println("Element not found");
        }
    }
}
