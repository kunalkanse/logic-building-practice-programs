#include<stdio.h>

// input N numbers from user through loop & perform the addition of all numbers

int main()
{
    int Arr[5];

    int iSum = 0;

    printf("Enter numbers : \n");

/*
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);
*/

    for(int iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

// iSum = Arr[0]+Arr[1]+Arr[2]+Arr[3]+Arr[4];

    for(int iCnt = 0; iCnt < 5; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    printf("sum of Array elements : %d",iSum);

    return 0;
}   
