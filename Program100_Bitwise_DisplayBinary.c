#include<stdio.h>

// Display binary of the Decimal number

void DisplayBinary(int);

int main()
{
    int iValue = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayBinary(iValue);

    return 0;
}

void DisplayBinary(int iNo)
{
    int iBinary = 0;

    while(iNo != 0)
    {
        iBinary = iNo % 2;
        printf("%d",iBinary);
        iNo = iNo / 2;
    }
}
