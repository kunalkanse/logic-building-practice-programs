#include<stdio.h>

/*

*   *   *   *
*   *   *   *
*   *   *   *

*/

void Display()
{
    int Row = 3;
    int Col = 4;

    int iCnt = 0, jCnt = 0;

    for(iCnt = 1; iCnt <= Row; iCnt++)
    {
        for (jCnt = 1; jCnt <= Col ; jCnt++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    Display();

    return 0;
}
