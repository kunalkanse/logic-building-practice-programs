#include<stdio.h>

// this program demonstrate the concept of adsresses in arrays

int main()
{
    char Arr[11] = "Marvellous";

    printf("%d\n",&Arr[0]);
    printf("%d\n",&Arr[5]);
    printf("%d\n",&Arr[9]);

    printf("\n");
    printf("Data at these addresses : \n");

    printf("%s\n",&Arr[0]);
    printf("%s\n",&Arr[5]);
    printf("%s\n",&Arr[9]);

    printf("\n");
    printf("\n");

    printf("%d\n",Arr);
    printf("%d\n",Arr+5);
    printf("%d\n",Arr+9);

    printf("\n");
    printf("Data at these addresses : \n");

    printf("%s\n",Arr);
    printf("%s\n",Arr+5);
    printf("%s\n",Arr+9);

    return 0;
}
