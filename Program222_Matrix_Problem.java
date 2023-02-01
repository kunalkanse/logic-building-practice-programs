
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
        int i = 0,j = 0, iMax = 0, iRow = 0,iCol = 0, iSum = 0;

		for(i = 1; i < Arr.length -1; i++)
		{
			for(j = 1; j < Arr[i].length - 1; j++)
			{
				iSum = ( (Arr[i-1][j-1]) + (Arr[i-1][j]) + (Arr[i-1][j+1]) + (Arr[i][j-1]) + (Arr[i][j+1]) + (Arr[i+1][j-1]) + (Arr[i+1][j]) + (Arr[i+1][j+1]) );
				if(iSum > iMax)
				{
					iMax = iSum;
					iRow = i;
					iCol = j;
				}
				iSum = 0;
			}
		}
		System.out.println("You should purchase the plot with row number : "+iRow+" Column number : "+iCol);
		System.out.println("Density of trees around our plot : "+iMax);
		System.out.println("Number of trees on our plot : "+Arr[iRow][iCol]);
    }
}


class Program222_Matrix_Problem
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
