
// Factorial

// Input : 1
// Output : 1

// Input : 3
// Output : 6

// Input : 5
// Output : 120

#include<stdio.h>

int Factorial(int);

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d",iRet);

    return 0;
}

int Factorial(int iNo)
{
    int iFact = 1;

    for(int iCnt = 1; iCnt < iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}
