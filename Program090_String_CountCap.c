#include<stdio.h>

// Count Capital letter of string

int CountCap(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >='A') && (*str <='Z'))
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

    iRet = CountCap(str);

    printf("count of Capital letters of string : %d",iRet);

    return 0;
}
