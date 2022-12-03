
import java.util.Scanner;
import stringXPackage.StringX;
// this package contains some common functionalities

// count vowels
// to convert string into array use toCharArray() method

class CountVowels extends StringX
{

    public int Count()
    {
        // converting String to character array
        char Arr[] = str.toCharArray();
        int iCnt = 0,iCount = 0;

        // java not contains '\0', so iterate loop till Arr.length
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u') )
            {
                iCount++;
            }
        }

        return iCount;
    }


}

class Program124_String_CountVowels
{
    public static void main(String args[])
    {

        Scanner Sobj = new Scanner(System.in);
        CountVowels CVobj = new CountVowels();

        CVobj.accept();

        int iRet = 0;

        iRet = CVobj.Count();
        System.out.println("Count of vowels : "+iRet);

    }    
}
