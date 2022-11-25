#include<stdio.h>

// input = 5
// iCnt =   1   2   3   4   5   
// output = 2   4   6   8   10

void Display(int iNo)
{
    for(int iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",iCnt*2);
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
