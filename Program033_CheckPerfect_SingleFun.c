#include<stdio.h>
#include<stdbool.h>

// check whether number is perfect number or not
// sum of factors & check perfect inside single function

bool CheckPerfect(int);

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("Number is perfect number");
    }
    else
    {
        printf("Number is not perfect number");
    }

    return 0;
}

//////////////////////////////////////////////////////////////////
// To check whether number is equal to sum of its factors
bool CheckPerfect(int iNumber)
{
    int iSum = 0;

    if(iNumber < 0)     // updater
    {   iNumber = -iNumber; }

    for(int iCnt = 1; iCnt <= (iNumber/2); iCnt++)
    {
        if((iNumber % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iNumber == iSum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
