
// Print in reverse order

// Input : 3
// Output : 3   2   1

// Input : 7
// Output : 7   6   5   4   3   2   1

#include<stdio.h>

void Display(); 

int main()
{
    Display();

    return 0;
}

void Display()
{
    int i = 0;

    for(i = 5; i > 0 ; i--)
    {
        printf("%d\t",i);
    }
}
