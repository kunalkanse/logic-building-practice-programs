
import java.util.*;

class Add
{
    public int Addition(int iNo1, int iNo2)
    {
        int iResult = 0;
        iResult = iNo1+iNo2;
        return iResult;
    }
}


public class Program112_Addition_Class {
    
    public static void main(String[] args) {
        
        Add Aobj = new Add();
        Scanner sc = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0, iRet = 0;

        System.out.println("Enter the first number : ");
        iValue1 = sc.nextInt();

        System.out.println("Enter the first number : ");
        iValue2 = sc.nextInt();

        iRet = Aobj.Addition(iValue1,iValue2);

        System.out.println("Addition is : "+iRet);

        sc.close();
    }
}
