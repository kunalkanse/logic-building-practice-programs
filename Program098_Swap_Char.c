#include<stdio.h>

// swap the characters

void Swap(char *p , char *q)
{
    char temp;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    char ch1 = '\0', ch2 = '\0';

    printf("Enter first character\n");
    scanf("%c",&ch1);
    
    printf("Enter second character\n");
    scanf(" %c",&ch2);

    printf("Before swapping characters are %c , %c\n",ch1,ch2);

    Swap(&ch1,&ch2);    //swap(100,200)

    printf("After swapping characters are %c , %c\n",ch1,ch2);

    return 0;
}
