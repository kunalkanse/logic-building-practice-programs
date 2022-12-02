
import java.util.*;

class ArraySum
{
    public int ArrayAddition(int Brr[])
    {
        int iSum = 0, iCnt = 0;

        for(iCnt = 0; iCnt < Brr.length ; iCnt++)
        {
            iSum = iSum + Brr[iCnt];
        }

        return iSum;
    }
}

class Program144_Array_Sum
{
    public static void main(String[] args) 
    {
        ArraySum ASobj = new ArraySum();
        Scanner Sobj = new Scanner(System.in);

        int iSize = 0,iCnt = 0,iRet = 0;

        System.out.println("Enter number of elements : ");
        iSize = Sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter Array Elements : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = Sobj.nextInt();
        }

        iRet = ASobj.ArrayAddition(Arr);

        System.out.println("Sum of Array Elements : "+iRet);

    }
}
