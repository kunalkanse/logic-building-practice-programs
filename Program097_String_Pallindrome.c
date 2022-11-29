#include<stdio.h>
#include<stdbool.h>

// check whether string is pallindrome of not
// using flag

bool CheckPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    bool flag = true;

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
            flag = false;
            break;
        }

        start++;
        end--;
    }

    return flag;
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
