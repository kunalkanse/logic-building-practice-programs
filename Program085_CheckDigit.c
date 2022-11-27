#include<stdio.h>
#include<stdbool.h>

// check whether Character is Digit or not

bool CheckDigit(char C)
{
    if((C >= '0') && (C <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c",&ch);

    bRet = CheckDigit(ch);

    if(bRet == true)
    {
        printf("character is Digit");
    }
    else
    {
        printf("Character is not Digit");
    }
}
