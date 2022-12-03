
// Reverse the String
// created valueof() to return the string

import java.util.Scanner;
import stringXPackage.StringX;
// this package contains some common functionalities

// to convert string into array use toCharArray() method

class StringRevX extends StringX
{
    public String ReverseX()
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

        return String.valueOf(Arr);
    }
}

class Program127_String_Reverse
{
    public static void main(String args[])
    {

        Scanner Sobj = new Scanner(System.in);
        StringRevX revobj = new StringRevX();

        revobj.accept();

        String str = revobj.ReverseX();

        System.out.println("modified String is : "+str);
    }    
}

