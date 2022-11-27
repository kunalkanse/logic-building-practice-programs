#include<stdio.h>
#include<stdbool.h>

// convert Small letter to capital

char SmallToCap(char C)
{
    if((C >= 'a') && (C <= 'z'))
    {
        return C-32;
    }
}

int main()
{
    char ch = '\0';
    char cRet = '\0';

    printf("Enter the character : ");
    scanf("%c",&ch);

    cRet = SmallToCap(ch);

    printf("converted %c to %c",ch,cRet);

    return 0;
}
