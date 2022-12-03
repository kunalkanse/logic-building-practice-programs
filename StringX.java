
// compile this code by this command
// javac StringX.java -d .

// StringX.java gets stored in stringXPackage package

package stringXPackage;

import java.util.*;

public class StringX
{
    // characteristics
    public String str;

    // behaviours
    public void accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the String : ");
        str = sobj.nextLine();
    }
    
    public void Display()
    {
        System.out.println(str);
    }
}
