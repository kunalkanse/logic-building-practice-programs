
// perform Addition

// Input : 3
// Output : 3 + 2 + 1 = 6

// Input : 5
// Output : 15

#include<stdio.h>

int Addition(int); 

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Addition(iValue);

    printf("Addition is : %d",iRet);

    return 0;
}

int Addition(int iNo)
{
    int iCnt = 0,iSum = 0;

    for(iCnt = 1; iCnt <= iNo  ; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}
