#include<iostream>
using namespace std;

// normal iterative function
int FactorialI(int iNo)
{
    int iFact = 1;

    while(iNo != 0)
    {
        iFact = iFact * iNo;
        iNo--;
    }

    return iFact;
}

// convering Normal iterative function to Recurcive function
// Recursive function
int FactorialR(int iNo)
{
    static int iFact = 1;

    if(iNo != 0)
    {
        iFact = iFact * iNo;
        iNo--;

        FactorialR(iNo);
    }

    return iFact;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("\nEnter the number : ");
    scanf("%d",&iValue);

    iRet = FactorialR(iValue);

    cout<<"Factorial is : "<< iRet<<"\n";

    return 0;

}
