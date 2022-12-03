
// check whether String is pallindrome or not

import java.util.Scanner;
import stringXPackage.StringX;
// this package contains some common functionalities

// to convert string into array use toCharArray() method

class StringPallindromeX extends StringX
{
    public boolean CheckPallindrome()
    {
        char Arr[] = str.toCharArray();
        boolean flag = true;
        int iStart = 0,iEnd = (Arr.length-1);

        while(iStart < iEnd)
        {
            if(Arr[iStart] != Arr[iEnd])
            {
                flag = false;
                break;
            }

            iStart++;
            iEnd--;
        }

        return flag;
    }
}

class Program128_String_Pallindrome_Check
{
    public static void main(String args[])
    {

        Scanner Sobj = new Scanner(System.in);
        StringPallindromeX Palobj = new StringPallindromeX();

        Palobj.accept();

        boolean bRet = Palobj.CheckPallindrome();

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

