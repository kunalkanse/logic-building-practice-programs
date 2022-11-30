#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// check whether 7th & 12th bit of number is ON or OFF

bool CheckOnOFF(int);

int main()
{
    UINT iValue = 0; 
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckOnOFF(iValue);

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

bool CheckOnOFF(int iNo)
{
    UINT iMask = 0x00000840;
// 0000 0000 0000 0000 0000 1000 0100 0000
  
    UINT iResult = 0;

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
