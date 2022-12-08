#include<iostream>
using namespace std;

typedef unsigned int UINT;

// swap first & Last bytes

int SwapByte(UINT iNo)
{
    return ( (iNo & 0x00ffff00) | (iNo << 24) | (iNo >> 24) );
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
