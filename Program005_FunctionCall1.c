
#include<stdio.h>

void Display(); // function decleration

int main()
{
    Display();

    return 0;
}

void Display()  // function defination
{
    for(int i = 1; i <= 5; i++)
    {
        printf("%d\n",i);
    }
}
