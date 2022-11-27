#include<stdio.h>

// passing String to the function using pointer

void Display(char *Name)
{
    printf("Your name is : %s",Name);
}

int main()
{
    char name[20];

    printf("Enter your name : ");
    scanf("%[^'\n']s",name);    // kunal kanse

    Display(name);

    return 0;
}
