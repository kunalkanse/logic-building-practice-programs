
/*
    iRow = 6

    iCol = 6
 
    $   #   #  #
    *   $   #  #
    *   *   $   #
    *   *   *   $

 */

#include<stdio.h>

void Display(int Row , int Col)
{
    int iCnt = 0;
    int jCnt = 0;
    
    // To Print such pattern row & col should be same because we have to print '$' at diagonals
    if(Row != Col)
    {
        printf("colomn & rows must be same");
        return;
    }

    for(iCnt = 1; iCnt <= Row ; iCnt++)
    {
        for (jCnt = 1; jCnt <= Col; jCnt++)
        {
            if(iCnt == jCnt)
            {
                printf("$\t");
            }
            else if(iCnt < jCnt)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter number of rows\n");
    scanf("%d",&iValue1);
    
    printf("Enter number of columns\n");
    scanf("%d",&iValue2);
    
    Display(iValue1, iValue2);//Display(3,3);
    
    return 0;
}
