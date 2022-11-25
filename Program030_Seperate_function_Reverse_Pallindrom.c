#include<stdio.h>
#include<stdbool.h>

// created seperate function for reverse and to check pallindrom

bool Reverse(int);
bool CheckPallindrome(int,int);


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = Reverse(iValue);
    
    if(bRet == true)
    {
        printf("number is Palindrome");
    }
    else
    {
        printf("Number is Not Palindrome");
    }

    return 0;
}

bool Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;
    int iTemp = iNo;
    bool bRet = false;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    bRet = CheckPallindrome(iRev,iTemp);

    return bRet;
}

bool CheckPallindrome(int iRev,int iTemp)
{
    if(iRev == iTemp)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

