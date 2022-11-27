#include<stdio.h>
#include<stdlib.h>

// Difference between smallest & larget element of Array

int Difference(int Brr[], int iSize)
{
    int iMin = Brr[0];
    int iMax = Brr[0];

    for(int iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Brr[iCnt] < iMin)
        {
            iMin = Brr[iCnt];
        }

        if(Brr[iCnt] > iMax)
        {
            iMax = Brr[iCnt];
        }
    }

    return iMax-iMin;
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
     
    iRet = Difference(Arr,iLength);

    printf("Difference between smallest & larget element of Array : %d",iRet);

    free(Arr);
    return 0;
}
