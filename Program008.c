
#include<stdio.h>

// Input : 3
// Output : 1   2   3

// Input : 7
// Output : 1   2   3   4   5   6   7

void Display(int);         // Declaration

int main()
{
    int iNo= 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    Display(iNo);      // Disaply(3);
    
    return 0;
}

void Display(int iValue)
{
    int i = 0;

    for(i = 1; i <= iValue; i++)
    {
        printf("%d\n",i);
    }
}
