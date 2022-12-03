
import java.util.*;

// This is industry level program for Sum of Array Elements

// this ArrayX Class Provide some common functionalities to the child class
class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    //Setter
    public void Accept()
    {
        Scanner Sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter Elements : ");
        for(iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt] = Sobj.nextInt();
        }
    }

    //Getter
    public void Display()
    {
        int iCnt = 0;

        System.out.println("Entered Elements are : ");
        for(iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}
 
// inheritance , reusability
class ArraySumX extends ArrayX
{
    public ArraySumX(int iSize)
    {
        super(iSize);
    }

    public int ArrayAdd()
    {
        int iSum = 0,iCnt = 0;

        for(iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;
    }
}

class Program118_ArraySum_industryLevel
{
    public static void main(String arg[])
    {
        Scanner Sobj = new Scanner(System.in);
        int iLength = 0,iRet = 0;

        System.out.println("Enter the Array size : ");
        iLength = Sobj.nextInt();

        ArraySumX ASobj = new ArraySumX(iLength);

        ASobj.Accept();
        ASobj.Display();

        iRet = ASobj.ArrayAdd();

        System.out.println("Sum of Array Elements : "+iRet);

    }
}
