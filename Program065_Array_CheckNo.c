#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// check whether number is present in array or not

bool Difference(int Brr[], int iSize)
{
    bool bRet = false;

    for(int iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Brr[iCnt] == 10)
        {
            bRet = true;    // flag
        }
    }

    return bRet;

    // dont write return statements inside loop

}

int main()
{
    int *Arr = NULL;
    int iLength = 0;
    bool bRet = 0;

    printf("Enter size of Array : ");
    scanf("%d",&iLength);

    Arr = (int*) malloc (sizeof(int) * iLength);

    for(int iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
     
    bRet = Difference(Arr,iLength);

    if(bRet == true)
    {
        printf("Element present");
    }
    else
    {
        printf("Element not present");
    }

    free(Arr);
    return 0;
}
