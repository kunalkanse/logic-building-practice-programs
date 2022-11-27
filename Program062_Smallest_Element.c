#include<stdio.h>
#include<stdlib.h>

// Display smallest  element of Array

float CountEven(int Brr[], int iSize)
{
    int iMin = Brr[0];

    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Brr[iCnt] < iMin)
        {
            iMin = Brr[iCnt];
        }
    }

    return iMin;
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

    printf("smallest element of Array : %d",iRet);

    free(Arr);
    return 0;
}
