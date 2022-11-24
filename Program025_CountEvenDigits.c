#include<stdio.h>

// Count Even digits

int CountEven(int);

int main()
{
    int iValue = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);

    int iRet = CountEven(iValue);
    printf("Count of even digits is : %d",iRet);

    return 0;
}

int CountEven(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo != 0) // or (iNo > 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}
