#include<iostream>
using namespace std;

// Sum of Arry Elements
// using Recursion

// iterative
int SumI(int q[] , int iSize)
{
    int iSum = 0;

    int iCnt = 0;
    while(iCnt < iSize)
    {
        iSum = iSum + q[iCnt];
        iCnt++;
    }

    return iSum;
}

// Recursive
int SumR(int q[] , int iSize)
{
    static int iSum = 0;
    static int iCnt = 0;

    if(iCnt < iSize)
    {
        iSum = iSum + q[iCnt];
        iCnt++;

        SumR(q , iSize);
    }

    return iSum;

}

int main()
{
    int iLength = 0 , iCnt = 0, iRet = 0;
    int *p = NULL;

    cout<<"Enter number of elements : ";
    cin>>iLength;

    p = new int[iLength];

    cout<<"Enter the Elements : \n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>>p[iCnt];
    }

    iRet = SumR(p , iLength);

    cout<<"Sum of Array Elements is "<<iRet;

    delete []p;

    return 0;
}
