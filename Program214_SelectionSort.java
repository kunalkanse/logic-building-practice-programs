
 
// Selection Sort 
// search the min or max Element & store it to last

import java.util.*;

class Sorting
{

    public void SelectionSort(int Arr[])
    {
        int i = 0,j = 0,minindex = 0;
        int temp = 0;   // for swapping
        int size = Arr.length;

        for(i = 0; i < size; i++)
        {
            minindex = i;

            for(j = i; j < size; j++)
            {
                if(Arr[minindex] > Arr[j])
                {
                    minindex = j;
                }
            }

            temp = Arr[i];
            Arr[i] = Arr[minindex];
            Arr[minindex] = temp;
        }
    }
}


public class Program214_SelectionSort
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

        obj.SelectionSort(Arr);

        System.out.println();
        System.out.print("Data After Sorting : ");
        for(int i = 0; i <Arr.length ; i++)
        {
            System.out.print(Arr[i] + " ");
        }
    } 
}

