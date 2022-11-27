#include<stdio.h>
#include<stdlib.h>

// Firstoccurance

// check whether number is present in array or not
// input number from user
// if Present display its first occurance

int FirstOccurance(int Brr[], int iSize, int iSearch)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Brr[iCnt] == iSearch)
        {
            break;
        } 
    }

    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }

}

int main()
{
    int *Arr = NULL;
    int iLength = 0;
    int iRet = 0;
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
     
    iRet = FirstOccurance(Arr,iLength,iSearch);

    if(iRet == -1)
    {
        printf("Element not present");
    }
    else
    {
        printf("Element is at : %d",iRet);
    }

    free(Arr);
    return 0;
}
