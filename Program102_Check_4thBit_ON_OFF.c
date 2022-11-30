#include<stdio.h>
#include<stdbool.h>

// check whether 4th bit of number is ON or OFF

bool CheckOnOFF(int);

int main()
{
    int iValue = 0;
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
    int iMask = 0x00000008;

    int iResult = 0;

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
