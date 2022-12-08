#include<iostream>
using namespace std;

typedef unsigned int UINT;

// swap first & Last bytes

int SwapByte(UINT iNo)
{
    UINT iMask = iNo & 0x00ffff00;

    UINT Byte1 = iNo << 24;
    UINT Byte4 = iNo >> 24;

    UINT iResult = iMask | Byte1 | Byte4;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    iRet = SwapByte(iValue);

    cout<<"After Swapping : "<<iRet<<endl;

    return 0;
}
