
/*
    iRow = 3
    iCol = 3
 
    1   2   3
    1   2   3
    1   2   3
 */

#include<stdio.h>

void Display(int Row , int Col)
{
    int iCnt = 0;
    int jCnt = 0;

    for(iCnt = 1; iCnt <= Row ; iCnt++)
    {
        for (jCnt = 1; jCnt <= Col; jCnt++)
        {
            printf("%d\t",jCnt);
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
