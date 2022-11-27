#include<stdio.h>
#include<stdlib.h>

// display Average of Array Elements

float Average(int Brr[], int iSize)
{
    int iSum = 0;
    float iAvg = 0.0;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Brr[iCnt];
    }

    iAvg = (float)iSum / (float)iSize;

    return iAvg;
}

int main()
{
    int *Arr = NULL;
    int iLength = 0;
    float iRet = 0;

    printf("Enter size of Array : ");
    scanf("%d",&iLength);

    Arr = (int*) malloc (sizeof(int) * iLength);

    for(int iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
     
    iRet = Average(Arr,iLength);

    printf("Average of Array elements : %.2f",iRet);

    free(Arr);
    return 0;
}
