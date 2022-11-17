

// Display # 5 times

#include<stdio.h>

void Display();         // Declaration

int main()
{
    Display();      // Function call
    
    return 0;
}

void Display()      // Defination
{
    int i = 0;
    
    for(i = 1; i <= 5; i++)
    {
        printf("#\n",i);
    }
}

