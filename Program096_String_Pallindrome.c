#include<stdio.h>
#include<stdbool.h>

// check whether string is pallindrome of not

bool CheckPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;

    start = str;
    end = str;

    while(*end != '\0')
    {   
        end++;
    }
    end--;

    while(start < end)
    {
        if(*start != *end)
        {
            break;
        }

        start++;
        end--;
    }

    if(start < end)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[30];
    bool bRet = false;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    bRet = CheckPallindrome(Arr);

    if(bRet == true)
    {
        printf("String is pallindrome");
    }
    else
    {
        printf("String is not pallindrome");
    }
}
