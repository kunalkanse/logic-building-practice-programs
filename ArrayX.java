
// created package of this java file & imported in Program119_converted118_To_Package.java

package arrayXPackage;

import java.util.*;
 
// this ArrayX Class Provide some common functionalities to the child class
public class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    //Setter
    public void Accept()
    {
        Scanner Sobj = new Scanner(System.in);
        int iCnt = 0;

        System.out.println("Enter Elements : ");
        for(iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt] = Sobj.nextInt();
        }
    }

    //Getter
    public void Display()
    {
        int iCnt = 0;

        System.out.println("Entered Elements are : ");
        for(iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}
