#include<stdio.h>

int main()
{
    int iCnt = 0;

    printf("  ******ASCII  Table******\n");
    printf("  ************************\n");

    printf("    Decimal\tcharacter\n\n");

    for(iCnt = 0; iCnt <= 127; iCnt++)
    {
        printf("\t%d\t%c\n",iCnt,iCnt);
    }

    printf("  *********************\n");

    return 0;
}
