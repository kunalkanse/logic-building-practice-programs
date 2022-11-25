#include<stdio.h>

// Reverse a number
// works for positive and negative both numbers

/*
    (iNo > 0) works only for positive numbers
    (iNo != 0) works for both +ve and -ve numbers
*/

int Reverse(int);

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    int iRet = Reverse(iValue);
    printf("Reversed Number is : %d",iRet);

    return 0;
}

int Reverse(int iNo)
{
    int iDigit = 0 , iRev = 0;

    while(iNo != 0) // or (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;    // To reverse number
        iNo = iNo / 10;
    }

    return iRev;
}
