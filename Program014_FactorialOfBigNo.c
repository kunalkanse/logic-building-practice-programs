
// Factorial - used unsigned long int for storing factorial of Big Numbers

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

    printf("Factorial is : ",iRet);

    return 0;
}

int Factorial(int iNo)
{
    unsigned long int iFact = 1;    // 8 Bytes
///////////////////////////////////
    for(int iCnt = 1; iCnt < iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}
