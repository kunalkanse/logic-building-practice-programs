
// Input :      6

// iCnt           1    2   3   4    5   6

// Output :         A   B   C   D   E   F

#include<stdio.h>

void Display(int);

int main()
{
    int iValue = 0;

    printf("enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'A' ; iCnt <= iNo ; iCnt++, ch++)
    {
        printf("%c\t",ch);
    }
}
