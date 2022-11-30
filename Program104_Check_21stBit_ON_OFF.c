#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// check whether 21st bit of number is ON or OFF

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
        printf("Bit is ON");
    }    
    else
    {
        printf("Bit is OFF");
    }
    
    return 0;
}

bool CheckOnOFF(int iNo)
{
    UINT iMask = 0x00100000;
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
