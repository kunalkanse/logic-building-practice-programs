 
// Bubble Sort 
// most efficient code for bubble sort because
// if array is sorted loop stops immegiately
// this code reduces time complexity of program

import java.util.*;

class Sorting
{

    public void BubbleSort(int Arr[])
    {
        int i = 0,j = 0,pass = 0;
        int temp = 0;   // for swapping
        int size = Arr.length;

        boolean flag = false;

        for(pass = 0; pass < size ; pass++)    // travel whole array
        {
            flag = false;

            for(j = 0; j < size - pass - 1; j++)
            {
                if(Arr[j] > Arr[j+1])
                {
                    flag = true;    // if Array is setteled at least once

                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp;
                }
            }

            if(flag == false)
            {
                break;
            }

            System.out.print("Data after pass " + (pass+1) + " : ");
            for(i = 0; i < Arr.length; i++)
            {
                System.out.print(Arr[i] + " ");
            }
            System.out.println();
        }
    }
}


public class Program212_BubbleSort_MostEfficient

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

        obj.BubbleSort(Arr);

        System.out.println();
        System.out.print("Data After Sorting : ");
        for(int i = 0; i <Arr.length ; i++)
        { 
            System.out.print(Arr[i] + " ");
        }
    } 
}
