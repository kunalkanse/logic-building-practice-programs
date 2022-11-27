#include<stdio.h>
#include<stdlib.h>

// Count of Elements in range between 10 to 20 of Array

float CountEven(int Brr[], int iSize)
{
    int iCount = 0;

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Brr[iCnt] > 10) && (Brr[iCnt] < 20))
        {
            iCount++;
        }
    }

    return iCount;
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

    printf("Count of Elements in range between 10 to 20 of Array : %d",iRet);

    free(Arr);
    return 0;
}
