#include<stdio.h>
#include<stdbool.h>

// check whether Character is Small case or not

bool CheckSmall(char C)
{
    if((C >= 'a') && (C <= 'z'))
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

    bRet = CheckSmall(ch);

    if(bRet == true)
    {
        printf("character is in small case");
    }
    else
    {
        printf("Character is not in small case");
    }
}
