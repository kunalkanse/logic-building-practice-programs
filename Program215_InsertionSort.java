
// insertion Sort 

import java.util.*;

class Sorting
{

    public void InsertionSort(int Arr[])
    {
        int i = 0, j = 0, key = 0;
        int size = Arr.length;

        for(i = 1; i < size; i++)
        {
            key = Arr[i];

            for(j = i-1; (j >= 0) && (Arr[j] > key) ; j--)
            {
                Arr[j+1] = Arr[j];
            }

            Arr[j+1] = key;
        }
    }
}


public class Program215_InsertionSort
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

        Sorting obj = new Sorting();

        System.out.println();

        obj.InsertionSort(Arr);

        System.out.println();
        System.out.print("Data After Sorting : ");
        for(int i = 0; i <Arr.length ; i++)
        {
            System.out.print(Arr[i] + " ");
        }
    } 
}

