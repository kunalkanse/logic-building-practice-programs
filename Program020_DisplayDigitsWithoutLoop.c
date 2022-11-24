
// Display digit of hardcoded number

/*
    7521 = 4
    432 = 3
*/

#include<stdio.h>

void Display();

int main()
{
    Display();

    return 0;
}

void Display()
{
    int iNo = 7521;
    int iDigit = 0;

    iDigit = iNo % 10;  // 1
    printf("%d",iDigit);    // 1
    iNo = iNo / 10;     // 752

    iDigit = iNo % 10;  // 2
    printf("%d",iDigit);    // 2
    iNo = iNo / 10;     //75

    iDigit = iNo % 10;  // 5
    printf("%d",iDigit);    //5
    iNo = iNo / 10;     // 7

    iDigit = iNo % 10;  // 7
    printf("%d",iDigit);    // 7
}
