#include<stdio.h>

// Sum of digits of number

int Display(int);

int main()
{
    int iValue = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);

    int iRet = Display(iValue);

    printf("Sum of Digits is : %d",iRet);

    return 0;
}

int Display(int iNo)
{
    int iDigit = 0, iSum = 0;

    while(iNo != 0) // or (iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}
