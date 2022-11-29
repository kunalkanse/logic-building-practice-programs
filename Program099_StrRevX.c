#include<stdio.h>

// implement own logic to reverse string
// strRevX

void strRevX(char *start)
{
    char *end = start;
    char temp = '\0';

    while(*end != '\0')
    {   
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[30];

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    strRevX(Arr);

    printf("Reversed string is : %s",Arr);
}
