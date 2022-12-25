#include<iostream>
using namespace std;

// Sum of Arry Elements
// using for  loop

int SumI(int q[] , int iSize)
{
    int iSum = 0;

    for(int iCnt = 0; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + q[iCnt];
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

    iRet = SumI(p , iLength);

    cout<<"Sum of Array Elements is "<<iRet;

    delete []p;

    return 0;
}
