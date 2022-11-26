#include<stdio.h>

// passing Array to the function, use pointer & return Addition of its elements

//Array is internally considered as pointer

//int Addition(int Brr[])
int Addition(int *Brr)
{
    int iSum = 0;

    for(int iCnt = 0; iCnt < 5 ; iCnt++)
    {
        //iSum = iSum + *(Brr+iCnt);

        iSum = iSum + (*Brr);
        Brr++;
        
    }

    return iSum;
}

int main()
{
    int Arr[5];
    int iRet = 0;

    printf("Enter numbers : \n");

    for(int iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = Addition(Arr);

    printf("sum of Array elements : %d",iRet);

    return 0;
}
