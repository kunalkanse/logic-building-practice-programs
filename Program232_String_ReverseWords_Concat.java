
// replaceAll() removes all extra white spaces of starting & ending of string
// in replaceAll regular expression (Regex) is used 
// nested function calll

//  split() : tokenize the string

// reverse Words of string in place
// String Class not allows to reverse due to imuttability
// StringBuffer class is mutable

import java.util.*;

class StringClass
{
    public String ReverseWords(String str)
    {
        String str1 = str.trim().replaceAll("[ ]{2,}"," ");
        String Arr[] = str1.split(" ");

        StringBuffer str_return = new StringBuffer(" ");

        for(String str_word : Arr)
        {
            StringBuffer sbobj = new StringBuffer(str_word);
            str_return = str_return.append(sbobj.reverse());
            str_return = str_return.append(" ");
        }

        String str_new = new String(str_return);
        return str_new.trim();
    }
}

class Program232_String_ReverseWords_Concat
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();

        StringClass sc = new StringClass();
        String Ret = sc.ReverseWords(str);

        System.out.println("New String : " + Ret);
    }
}
