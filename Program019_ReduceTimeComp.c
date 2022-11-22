
// find the factors of input number
// reduced time complexity

// 10 = 1 2 5
// 12 = 1 2 3 4 6

#include<stdio.h>

void DisplayFactors(int);

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}

void DisplayFactors(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 1 ; iCnt < (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
