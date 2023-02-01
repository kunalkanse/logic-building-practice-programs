
// 2D Array = Matrix

import java.util.*;

class Program220_Matrix_2dArray
{
    public static void main(String[] args) 
    {
        int i = 0, j = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of Rows : ");
        int Row = sobj.nextInt();

        System.out.print("Enter number of Colomns : ");
        int Col = sobj.nextInt();

        int Arr[][] = new int[Row][Col];

        System.out.print("Enter the Elements in Array : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length ; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        System.out.println("Entered Elements are : ");
        for(i = 0; i < Arr.length ; i++)
        {
            for(j = 0; j < Arr[i].length ; j++)
            {
                System.out.print(Arr[i][j] + " ");
            }
        }
    }
}
