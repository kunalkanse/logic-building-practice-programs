
// 2D Array = Matrix

import java.util.*;

class Matrix
{
    public int Arr[][];

    public Matrix(int Rows , int Cols)
    {
        Arr = new int[Rows][Cols];
    }

    public void Accept()
    {
        int i = 0, j = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Elements in Array : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length ; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Entered Elements in Array : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length ; j++)
            {
                System.out.print(Arr[i][j] + " ");
            }
            System.out.println();
        }
    }

    void targetedPlot()
    {
        int i = 0, j = 0;

        for(i = 1; i < Arr.length-1; i++)   //  skip Rows of both sides
        {
            for(j = 1; j <Arr[i].length-1;j++) // skip upper & lower side
            {

                if( Arr[i][j] == ( (Arr[i-1][j-1]) + (Arr[i-1][j]) + (Arr[i-1][j+1]) + (Arr[i][j-1]) + (Arr[i][j+1]) + (Arr[i+1][j-1]) + (Arr[i+1][j]) + (Arr[i+1][j+1]) ) )
                {
					System.out.println("Desired plot with row number : "+i+" Column number :  "+j);
                }
            }
        }
    }
}


class Program272_Matrix_Problem
{
    public static void main(String[] args) 
    {
       
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of Rows : ");
        int Row = sobj.nextInt();

        System.out.print("Enter number of Colomns : ");
        int Col = sobj.nextInt();

        Matrix mobj = new Matrix(Row , Col);

        System.out.println();
        mobj.Accept();
        System.out.println();
        mobj.Display();

        System.out.println();
        mobj.targetedPlot();

    }
}
