#include<iostream>
using namespace std;

//toggle user input bit

typedef unsigned int UINT;

/*
    op1     op2     &       |       ^
    1       0       0       1       1
    0       1       0       1       1
    1       1       1       1       0
    0       0       0       0       0
 */


// iNO      0000    0000   1110    0100    1111    0100    1011     1010
// iPos      6
// iRet      0000    0000   1110    0100    1111    0100    1001     1010

UINT ToggleBit(UINT iNo , UINT iPos)
{
    UINT iMask = 0x00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    cout<<iResult<<endl;

    return iResult;

}

// position = 5

// iMask                0   0   0   0   0   0   0   1
// iMask = iMask << (position -1)
// iMask = iMask << (5 -1)
// iMask = iMask << 4
// iMask                0   0   0   1   0   0   0   0

//  Input               0   1   1   0   0   1   0   0
//  iMask               0   0   0   1   0   0   0   0       ^
//--------------------------------------------------------
//  Output              0   1   1   1   0   1   0   0

int main()
{
    UINT iValue1 = 0, pos = 0, iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue1;

    cout<<"Enter the position : ";
    cin>>pos;

    if(pos < 0 || pos > 32)
    {
        return 0;
    }

    iRet = ToggleBit(iValue1,pos);

    cout<<"Updated number is : "<<iRet<<endl;
}
