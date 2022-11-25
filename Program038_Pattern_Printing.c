#include<stdio.h>

// input = 5
// output = 4 3 2 1

void Display(int iNo)
{
    for(int iCnt = iNo; iCnt > 0 ; iCnt--)
    {
        printf("%d\t",iCnt);
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
