
// check whether String is pallindrome or not

import java.util.Scanner;
import stringXPackage.StringX;
// this package contains some common functionalities

// to convert string into array use toCharArray() method

class CheckPallindromeX extends StringX
{
    public boolean CheckPallindrome()
    {
        char Arr[] = str.toCharArray();
        int iStart = 0,iEnd = (Arr.length-1);
        char temp = '\0';

        while(iStart < iEnd)
        {
            temp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = temp;

            iStart++;
            iEnd--;
        }

        String NewStr = new String(Arr);
        boolean bRet = NewStr.equals(str);
        return bRet;
    }
}

class Program129_String_Pallindrome
{
    public static void main(String args[])
    {

        Scanner Sobj = new Scanner(System.in);
        CheckPallindromeX revobj = new CheckPallindromeX();

        revobj.accept();

        boolean  bRet = revobj.CheckPallindrome();

        if(bRet == true)
        {
            System.out.println("String is pallindrome");
        }
        else
        {
            System.out.println("String is not pallindrome");
        }
    }    
}

