
import java.util.Scanner;
import stringXPackage.StringX;
// this package contains some common functionalities

// count vowels
// using for loop
// to convert string into array use toCharArray() method

class CountVowels extends StringX
{

    public int Count()
    {
        // converting String to character array
        char Arr[] = str.toCharArray();
        int iCnt = 0,iCount = 0;

        while(iCnt<Arr.length)
        {
            if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u') )
            {
                iCount++;
            }

            iCnt++;
        }

        return iCount;
    }

}

class Program125_String_CountVowels_While
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
