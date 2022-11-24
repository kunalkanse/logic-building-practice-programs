#include<stdio.h>

// return sum of Even digits

int SumEven(int);

int main()
{
    int iValue = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);

    int iRet = SumEven(iValue);
    printf("Sum of Even digits is : %d",iRet);

    return 0;
}

int SumEven(int iNo)
{
    int iDigit = 0, iSum = 0;

    if(iNo == 0)
    {   return 1;   }
    
    if(iNo < 0)
    {   iNo = -iNo; }

    while(iNo != 0) // or (iNo > 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iSum = iSum + iDigit;
        }

        iNo = iNo / 10;
    }

    return iSum;
}
