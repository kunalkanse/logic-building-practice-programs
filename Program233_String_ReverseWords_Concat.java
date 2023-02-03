
// Reverse string
// StringBuffer class is immutable

import java.util.*;

class Program233_String_ReverseWords_Concat
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter string");
		String s = sobj.nextLine();

		StringBuffer sobj1 = new StringBuffer(s);
		System.out.println("Output is : "+sobj1.reverse());
	}
}
