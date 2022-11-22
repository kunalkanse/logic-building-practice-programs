
// Factorial using while

// Input : 1
// Output : 1

// Input : 3
// Output : 6

// Input : 5
// Output : 120

#include<stdio.h>
typedef unsigned long long int UINT;
UINT Factorial(int);

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d",iRet);

    return 0;
}

UINT Factorial(int iNo)
{
    UINT iFact = 1 , iCnt = 1;

    while(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }

    return iFact;
}
