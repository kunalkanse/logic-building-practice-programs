
#include<iostream>
#include<stdio.h>
using namespace std;

int strLenI(char *str)
{
    int iLen = 0;

    while(*str != '\0')
    {
        iLen++;
        str++;
    }

    return iLen;
}

int strLenR(char *str)
{
    static int iLen = 0;

    if(*str != '\0')
    {
        iLen++;
        str++;
        strLenR(str);
    }

    return iLen;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter String : ";
    scanf("%[^'\n']s",Arr);

    iRet = strLenR(Arr);

    cout<<"Length of String is "<<iRet;

    return 0;
}
