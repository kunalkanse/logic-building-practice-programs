
import java.util.*;

class Program110_AdditionMain {

    public static void main(String[] args) 
    {
        
        Scanner sc = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0, iSum = 0;

        System.out.println("Enter the first number : ");
        iValue1 = sc.nextInt();

        System.out.println("Enter the first number : ");
        iValue2 = sc.nextInt();

        iSum = iValue1 + iValue2;

        System.out.println("Addition is : "+iSum);

        sc.close();
        
    }
}
