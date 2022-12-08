#include<iostream>
using namespace std;

typedef unsigned int UINT;

// Toggle bits between range

int ToggleRange(UINT iNo, UINT iStart, UINT iEnd)
{
    return (iNo ^ (0xffffffff << (iStart - 1)) & ( 0xffffffff >> (32 - iEnd)) );
}

int main()
{
    UINT iValue = 0, iStart = 0, iEnd = 0,iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    cout<<"Enter starting position : ";
    cin>>iStart;

    cout<<"Enter ending position : ";
    cin>>iEnd;

    iRet = ToggleRange(iValue,iStart,iEnd);

    cout<<"Updated number is : "<<iRet<<endl;

    return 0;
}
