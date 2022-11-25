#include<stdio.h>
#include<stdbool.h>

// created seperate function for reverse and to check pallindrom

int Reverse(int);
bool CheckPallindrome(int);


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);
    
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

/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    return iRev;
}

/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

bool CheckPallindrome(int iNo)
{
    int iRev = Reverse(iNo);

    if(iNo == iRev)
    {
        return true;
    }
    else
    {
        return false;
    }
}

