
#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int);

int main()
{
    int iValue;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue); 

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is ODD");
    }
}

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}