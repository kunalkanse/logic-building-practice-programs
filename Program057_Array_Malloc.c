#include<stdio.h>
#include<stdlib.h>

// Allocate Dynamic memory, Ask user how much data he want to store
// free the memory

int Addition(int *Brr,int iSize)
{
    int iSum = 0;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Brr[iCnt];
    }

    return iSum;
}

int main()
{
    int *Arr = NULL;    // pointer

    int iLength = 0, iRet = 0;

    printf("Enter length of Array : ");
    scanf("%d",&iLength);

    Arr = (int*) malloc ( sizeof(int) * iLength);   //Dynamic memory allocation

    printf("Enter numbers : ");

    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = Addition(Arr,iLength);

    printf("Addtion of Elements is : %d",iRet);

    free(Arr);
    return 0;
}
