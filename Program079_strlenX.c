#include<stdio.h>

// create own function as strlenX to display length of string

int strlenX(char *str)
{
    int iCnt = 0;

    if(str == NULL) // if string is empty
    {
        return 0;
    }

    while(*str != '\0')
    { 
        iCnt++;
        str++;
    }

    return iCnt;
}

int main()
{
    char str[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",str);

    iRet = strlenX(str);

    printf("Length of string : %d",iRet);

    return 0;
}
