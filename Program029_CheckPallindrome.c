#include<stdio.h>
#include<stdbool.h>

// Check whether number is palindrome or not 
// works for positive and negative both

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

bool CheckPallindrome(int iNo)
{
    int iDigit = 0 , iRev = 0;
    int iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;    // To reverse number
        iNo = iNo / 10;
    }

    if(iRev == iTemp)   // to check equality
    {
        return true;
    }
    else
    {
        return false;
    }

}
