

import java.util.*;

class Program111_Addition_MainFunction 
{
    public static int Addition(int iNo1, int iNo2)
    {
        int iResult = 0;
        iResult = iNo1+iNo2;
        return iResult;
    }

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0, iRet = 0;

        System.out.println("Enter the first number : ");
        iValue1 = sc.nextInt();

        System.out.println("Enter the first number : ");
        iValue2 = sc.nextInt();

        iRet = Addition(iValue1,iValue2);

        System.out.println("Addition is : "+iRet);

        sc.close();
    }

}
