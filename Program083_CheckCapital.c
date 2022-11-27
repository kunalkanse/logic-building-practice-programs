#include<stdio.h>
#include<stdbool.h>

// check whether Character is Capital or not

bool CheckCapital(char C)
{
    if((C >= 'A') && (C <= 'Z'))
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

    bRet = CheckCapital(ch);

    if(bRet == true)
    {
        printf("character is capital");
    }
    else
    {
        printf("Character is not Capital");
    }
}
