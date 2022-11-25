#include<stdio.h>

// Display Power of the number

int Power(int,int);

int main()
{
    int x = 0, y = 0 , iRet = 0;

    printf("Enter number : ");
    scanf("%d",&x);

    printf("Enter its power : ");
    scanf("%d",&y);

    iRet = Power(x , y);

    printf("Power : %d",iRet);

    return 0;
}

int Power(int Base , int pow)
{
    int iCnt = 0, iMult = 1;

    for(iCnt = 1 ; iCnt <= pow ; iCnt++)
    {
        iMult = iMult * Base;
    }

    return iMult;
}
