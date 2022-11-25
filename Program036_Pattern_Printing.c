#include<stdio.h>

// input = 5
// output = *   *   *   *   *

void Display(int iNo)
{
    for(int iCnt = 0; iCnt < iNo ; iCnt++)
    {
        printf("*\t");
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
