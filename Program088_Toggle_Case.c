#include<stdio.h>
#include<stdbool.h>

// Toggle letters
// convert Capital letter to small & Small to cap

char Toggle(char C)
{
    if((C >= 'A') && (C <= 'Z'))
    {
        return C+32;
    }
    else if((C >= 'a') && (C <= 'b'))
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

    cRet = Toggle(ch);

    printf("converted %c to %c",ch,cRet);

    return 0;
}
