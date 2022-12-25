
#include<iostream>
#include<stdio.h>
using namespace std;

int strCountCapI(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        
        str++;
    }

    return iCnt;
}


int strCountCapR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }

        str++;
        strCountCapR(str);
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter String : ";
    scanf("%[^'\n']s",Arr);

    iRet = strCountCapR(Arr);

    cout<<"Count of Capital letters is "<<iRet;

    return 0;
}
