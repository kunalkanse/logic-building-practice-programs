#include<stdio.h>

// Count the vowels of String

int CountVowels(char *Brr)
{
    int iCnt = 0;

    if(Brr == NULL)
    {
        return -1;
    }

    while(*Brr != '\0')
    {
        if((*Brr == 'a') || (*Brr == 'e') || (*Brr == 'i') || (*Brr == 'o') || (*Brr == 'u'))
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

    printf("Enter the String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountVowels(Arr);

    printf("Count of vowels is : %d",iRet);

    return 0;
}
