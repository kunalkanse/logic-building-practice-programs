
import java.util.*;

// check whether input number is prime number or not

class Prime
{
    public boolean CheckPrime(int iNo)
    {
        boolean flag = true;

        for(int iCnt = 2; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo%iCnt) == 0)
            {
                flag = false;
                break;
            }
        }

        return flag;
    }
}

public class Program113_Check_PrimeNumber
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
