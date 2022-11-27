#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// check whether number is present in array or not
// without using flag

bool CheckNumber(int Brr[], int iSize, int iSearch)
{
    bool bRet = false;
    int iCnt = 0;

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(Brr[iCnt] == iSearch)
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }

}

int main()
{
    int *Arr = NULL;
    int iLength = 0;
    bool bRet = 0;
    int iSearch = 0;

    printf("Enter size of Array : ");
    scanf("%d",&iLength);

    Arr = (int*) malloc (sizeof(int) * iLength);

    for(int iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Enter the number to search : ");
    scanf("%d",&iSearch);
     
    bRet = CheckNumber(Arr,iLength,iSearch);

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
