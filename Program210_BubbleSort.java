 
// Bubble Sort 

import java.util.*;

class Sorting
{

    public void BubbleSort(int Arr[])
    {
        int i = 0,j = 0;
        int temp = 0;   // for swapping
        int size = Arr.length;

        for(i = 0; i < size ; i++)    // travel whole array
        {
            for(j = 0; j < size - i - 1; j++)
            {
                if(Arr[j] > Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp;
                }
            }
        }
    }
}


public class Program210_BubbleSort

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

        obj.BubbleSort(Arr);

        System.out.println("Data After Sorting : ");
        for(int i = 0; i <Arr.length ; i++)
        {
            System.out.println(Arr[i]);
        }
    } 
}
