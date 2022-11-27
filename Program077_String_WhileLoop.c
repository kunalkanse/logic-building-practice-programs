#include<stdio.h>

// passing String to the function using pointer
// travel using while loop

void Display(char *Name)
{
    while(*Name != '\0')
    {
        printf("%c\t",*Name);
        Name++;
    }      
}

int main()
{
    char name[20];

    printf("Enter your name : ");
    scanf("%[^'\n']s",name);    // kunal kanse

    Display(name);

    return 0;
}
