
import java.util.*;

// check whether number is Armstrong number or not

class Armstrong
{
    public boolean CheckArmstrong(int iNo)
    {
        int iTemp = iNo, iDigit = 0, iPower = 1, iSum = 0;
        int iDigCnt = 0, iCnt = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iTemp != 0)
        {
            iDigCnt++;
            iTemp = iTemp / 10;
        }

        iTemp = iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            for(iCnt = 1; iCnt <= iDigCnt ; iCnt++)
            {
                iPower = iPower * iDigit;
            }

            iSum = iSum + iPower;
            iPower = 1;
            iTemp = iTemp / 10;
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

public class Program115_Check_ArmstrongNumber {
    
    public static void main(String[] args) {
        
        Scanner Sobj = new Scanner(System.in);
        Armstrong Aobj = new Armstrong();

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter the number : ");
        iValue = Sobj.nextInt();

        bRet = Aobj.CheckArmstrong(iValue);

        if(bRet == true)
        {
            System.out.println("Number is ArmStrong number");
        }
        else
        {
            System.out.println("Number is Not ArmStrong number");
        }

        Sobj.close();

    }
}
