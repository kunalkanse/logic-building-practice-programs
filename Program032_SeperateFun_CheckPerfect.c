#include<stdio.h>
#include<stdbool.h>

// check whether number is perfect number or not
// created seperate function for the sum of factors & to check perfect//

// updater & filters should be in every function cause we dont know who are going to reuse our function

bool CheckPerfect(int);
int SumFactors(int); 

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

bool CheckPerfect(int iNo)
{
    int iRet = 0;

    if(iNo < 0)     // updater
    {   iNo = -iNo; }

    iRet = SumFactors(iNo);

    if(iNo == iRet)
    {
        return true;
    }
    else
    {
        return false;
    }
}

///////////////////////////////////////////////////////////////////
// for the sum of factors of number

int SumFactors(int iNumber) 
{
    int iSum = 0;
    
     if(iNo < 0)     // updater
    {   iNo = -iNo; }

    for(int iCnt = 1; iCnt <= (iNumber/2); iCnt++)
    {
        if((iNumber % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}
