#include<stdio.h>

// Count Small letter of string

// Hello
// 4

// HELlo
// 2

// HELLO
// 0

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >='a') && (*str <='z'))
        {
            iCnt++;
        }
        
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

    iRet = CountSmall(str);

    printf("count of small letters of string : %d",iRet);

    return 0;
}
