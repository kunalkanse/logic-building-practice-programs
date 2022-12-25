#include<iostream>
using namespace std;

// normal iterative function
int SumI(int iNo)
{
    int iSum = 0;

    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }

    return iSum;
}

// convering Normal iterative function to Recurcive function
// Recursive function
int SumR(int iNo)
{
    static int iSum = 0;

    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;

        SumR(iNo);
    }

    return iSum;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("\nEnter the number : ");
    scanf("%d",&iValue);

    iRet = SumR(iValue);

    cout<<"Summation of digits : "<< iRet<<"\n";

    return 0;

}
