#include<stdio.h>

/*

input = 3   4

*   *   *   *
*   *   *   *
*   *   *   *

*/

void Display(int Row , int Col)
{
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
    int iRow = 0;
    int iCol = 0;

    printf("Enter rows : ");
    scanf("%d",&iRow);

    printf("Enter colomns : ");
    scanf("%d",&iCol);
    
    Display(iRow,iCol);

    return 0;
}
