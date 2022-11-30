
import java.util.*;

// check whether input number is prime number or not
// without flag

class Prime
{
    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo%iCnt) == 0)
            {
                break;
            }
        }

        if(iCnt <= (iNo/2))
        {
            return false;
        }
        else
        {
            return true;
        }

    }
}

public class Program114_Check_Prime_WithoutFlag
{

    public static void main(String[] args) 
    {
        Prime Pobj = new Prime();
        Scanner Sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = Sobj.nextInt();

        bRet = Pobj.CheckPrime(iValue);

        if(bRet == true)
        {
            System.out.println("Number is Prime number");
        }
        else
        {
            System.out.println("Number is Not Prime number");
        }

        Sobj.close();
    }    
}
