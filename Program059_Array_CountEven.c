#include<stdio.h>
#include<stdlib.h>

// Count Even Elements of Array

float CountEven(int Brr[], int iSize)
{
    int iSum = 0;
    int iEven = 0;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Brr[iCnt] % 2) == 0)
        {
            iEven++;
        }
    }

    return iEven;
}

int main()
{
    int *Arr = NULL;
    int iLength = 0;
    int iRet = 0;

    printf("Enter size of Array : ");
    scanf("%d",&iLength);

    Arr = (int*) malloc (sizeof(int) * iLength);

    for(int iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
     
    iRet = CountEven(Arr,iLength);

    printf("Count of Even Elements of Array : %d",iRet);

    free(Arr);
    return 0;
}
