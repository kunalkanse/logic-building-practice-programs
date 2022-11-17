
// using filters & uodater for incorrect input

// Input : 3
// Output : 1   2   3

// Input : 7
// Output : 1   2   3   4   5   6   7


#include<stdio.h>

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
  
    // if user enter 0
    if(iValue == 0) //filter
    {
        printf("You entered 0");
        return;
    }
    
    // if user enter negative values
    if(iValue < 0)  //updater
    {
        iValue = -iValue;
    }
    
    for(i = 1; i <= iValue; i++)
    {
        printf("%d\n",i);
    }
}
