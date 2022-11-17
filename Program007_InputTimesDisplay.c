// input from user And print "Hello" that time

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;
    
    for(i = 1; i <= iNo; i++)
    {
        printf("Hello\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);    // if 3

    Display(iValue);    //Display(3);

    return 0;
}
