#include<stdio.h>

// input = 6
// iCnt =   1   2   3   4   5   6
// output = *   #   *   #   *   #

void Display(int iNo)
{
    for(int iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("#\t");
        }
        else
        {
            printf("*\t");
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
