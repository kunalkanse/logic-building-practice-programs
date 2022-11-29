#include<stdio.h>

// Accept string & character from user & count frequency of that character

int CountFreq(char *Brr , char ch)
{
    int iCnt = 0;

    if(Brr == NULL)
    {
        return -1;
    }

    while(*Brr != '\0')
    {
        if(*Brr == ch)
        {
            iCnt++;
        }

        Brr++;
    }

    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;
    char ch = '\0';

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : ");
    scanf(" %c",&ch);
    // IMP

    iRet = CountFreq(Arr,ch);

    printf("freaquancy of %c is : %d",ch,iRet);

    return 0;
}
