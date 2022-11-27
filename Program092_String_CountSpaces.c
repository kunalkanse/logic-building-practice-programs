#include<stdio.h>

// Count spaces  of string

int CountSpace(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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

    iRet = CountSpace(str);

        printf("count of spaces of string : %d\n",iRet);


    return 0;
}
