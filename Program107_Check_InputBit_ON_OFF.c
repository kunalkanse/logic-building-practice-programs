#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// check whether user input bit of number is ON or OFF
// shift operator

bool CheckOnOFF(int,int);

int main()
{
    UINT iValue = 0; 
    int iPos = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    printf("Enter the position : ");
    scanf("%d",&iPos);

    bRet = CheckOnOFF(iValue,iPos);

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

bool CheckOnOFF(int iNo,int iPos)
{
    UINT iMask = 0x00000001;    //initial position os mask
    UINT iResult = 0;

    if((iPos<1) || (iPos>32))
    {
        return false;
    }

    //shifting bit
    iMask = iMask << (iPos - 1);

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
