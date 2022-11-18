
// Print in reverse order , inut from user

// Input : 3
// Output : 3   2   1

// Input : 7
// Output : 7   6   5   4   3   2   1

#include<stdio.h>

void Display(int); 

int main()
{

    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

void Display(int iNo)
{
    int i = 0;

    for(i = iNo; i > 0 ; i--)
    {
        printf("%d\t",i);
    }
}
