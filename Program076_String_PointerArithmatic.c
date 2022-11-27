#include<stdio.h>

// passing String to the function using pointer
// This program demonstrate pointer arithmatic

void Display(char *Name)
{
    printf("%c\t",*Name);
    Name++;

    printf("%c\t",*Name);
    Name++;
    
    printf("%c\t",*Name);
    Name++;
    
    printf("%c\t",*Name);
    Name++;
    
    printf("%c\t",*Name);
    Name++;

    printf("%c\t",*Name);        
}

int main()
{
    char name[20];

    printf("Enter your name : ");
    scanf("%[^'\n']s",name);    // kunal kanse

    Display(name);

    return 0;
}
