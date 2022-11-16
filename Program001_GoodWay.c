//addition of two numbers

// create separate function for different operations
// main function should contains function calls mostly

#include<stdio.h>

int Addition(int no1,  int no2)
{
    return no1 + no2;
}

int main()
{
    int iValue1, iValue2, iRet;
    
    printf("Enter first number\n");
    scanf("%d",&iValue1);

    printf("Enter second number\n");
    scanf("%d",&iValue2);

    z = Addition(iValue1,iValue2);

    printf("Addition is : %d\n",iRet);
    return 0;
}


/* 

// writing all logic inside main function is bad practice of writing code
// all variables should hava approprite names, first alphabet should be initial of datatype
// like , for integer variable -> iNo , i Value
// for float variable -> fNo , fValue
 
#include<stdio.h>
int main()
{
    int x, y, z;
    printf("Enter first number\n");
    scanf("%d",&x);
    printf("Enter second number\n");
    scanf("%d",&y);
    z = x+y;
    printf("Addition is : %d\n",z);
    return 0;
}
*/
