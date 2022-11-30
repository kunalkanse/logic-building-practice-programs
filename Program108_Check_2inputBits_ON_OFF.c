#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// input two bits positions.
// check whether user input bits of number is ON or OFF
// shift operator

bool CheckOnOFF(UINT,UINT,UINT);

int main()
{
    UINT iValue = 0; 
    UINT iPos1 = 0, iPos2 = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    printf("Enter the position : ");
    scanf("%d",&iPos1);

    printf("Enter the position : ");
    scanf("%d",&iPos2);

    bRet = CheckOnOFF(iValue,iPos1,iPos2);

    if(bRet == true)
    {
        printf("Bits are ON");
    }    
    else
    {
        printf("Bits are OFF");
    }
    
    return 0;
}

bool CheckOnOFF(UINT iNo,UINT iPos1,UINT iPos2)
{
    UINT iMask1 = 0x00000001, iMask2 = 0x000000001, iMask = 0x00000000;    //initial position os mask
    UINT iResult = 0;

    if((iPos1<1) || (iPos1>32) || (iPos2<1) || (iPos2>32))
    {
        return false;
    }

    //shifting bit at user specified position
    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    // combining both mask together
    iMask = iMask1 | iMask2;

    iResult = iNo & iMask; 

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }

}
