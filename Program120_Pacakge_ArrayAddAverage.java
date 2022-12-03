
import java.util.*;
import arrayXPackage.ArrayX;

// This is industry level program for Average of Array Elements

// inheritance , reusability
class ArrayAddAverageX extends ArrayX
{
    public ArrayAddAverageX(int iSize)
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

    public float ArrayAverage()
    {
        int iSum = 0,iCnt = 0;

        for(iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return (iSum/Arr.length);
    }
}

class Program120_Pacakge_ArrayAddAverage
{
    public static void main(String arg[])
    {
        Scanner Sobj = new Scanner(System.in);
        int iLength = 0;
        float iRet = 0.0f;

        System.out.println("Enter the Array size : ");
        iLength = Sobj.nextInt();

        ArrayAddAverageX ASobj = new ArrayAddAverageX(iLength);

        ASobj.Accept();
        ASobj.Display();

        iRet = ASobj.ArrayAverage();

        System.out.println("Average of Array Elements : "+iRet);

    }
}


