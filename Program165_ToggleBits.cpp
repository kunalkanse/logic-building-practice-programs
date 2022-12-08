#include<iostream>
using namespace std;

typedef unsigned int UINT;

// Toggle bits between range

int ToggleRange(UINT iNo, UINT iStart, UINT iEnd)
{
    UINT iMask = 0;
    UINT iResult = 0;

    iMask = (0xffffffff << (iStart - 1)) & ( 0xffffffff >> (32 - iEnd));

    iResult = iNo ^ iMask;

    return iResult;
}

// iStart = 5
// iEnd = 16

//      0000    0000    0000    0000    0000    0000    0000    0000
//      0000    0000    0000    0000    1111    1111    1111    0000

// iMask1 = 0xFFFFFFFF;
// 1111     1111    1111       1111     1111    1111       1111     1111
// iMask2 = 0xFFFFFFFF;

// iMask1 = iMask1 << (iStart -1);
//  1111    1111    1111    1111    1111    1111    1111    0000

// iMask2 = iMask2 >> (32 - iEnd);
//  0000    0000    0000    0000    1111    1111    1111    1111

// iMask = (0xffffffff << (iStart - 1)) & ( 0xffffffff >> (32 - iEnd));
//  1111    1111    1111    1111    1111    1111    1111    0000
//  0000    0000    0000    0000    1111    1111    1111    1111        &
// ______________________________________________________
//  0000    0000    0000    0000    1111    1111    1111    0000

// iResult = iNo ^ iMask;


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
