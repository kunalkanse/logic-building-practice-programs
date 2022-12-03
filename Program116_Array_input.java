import java.util.*;

class Program116_Array_input
{
    public static void main(String[] args) 
    {
        Scanner Sobj = new Scanner(System.in);

        int iSize = 0,iCnt = 0;

        System.out.println("Enter number of elements : ");
        iSize = Sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter Array Elements : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = Sobj.nextInt();
        }

        System.out.println("Entered Elements are : ");
        for(iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt] + " ");
        }

        Sobj.close();
    }
}
