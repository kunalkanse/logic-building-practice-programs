#include<stdio.h>

// Count Capital & Small letter of string

void CountCapSmall(char *str)
{
    int cCnt = 0, sCnt = 0;

    while(*str != '\0')
    {
        if((*str >='A') && (*str <='Z'))
        {
            cCnt++;
        }
        else if ((*str >='a') && (*str <='z'))
        {
            sCnt++;
        }
        
        str++;
    }

    printf("\ncount of Capital letters of string : %d\n",cCnt);
    printf("count of small letters of string : %d\n",sCnt);
}

int main()
{
    char str[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",str);

    CountCapSmall(str);

    return 0;
}
