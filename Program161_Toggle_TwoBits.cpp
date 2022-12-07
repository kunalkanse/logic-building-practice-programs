#include<iostream>
using namespace std;

//toggle user input bit

typedef unsigned int UINT;

// Toggle two bits

UINT ToggleBit(UINT iNo , UINT iPos1 , UINT iPos2)
{
    UINT iMask = 0 , iMask1 = 0x00000001 , iMask2 = 0x00000001;
    UINT iResult = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iMask = iMask1 | iMask2;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue1 = 0, pos1 = 0,pos2 = 0, iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue1;

    cout<<"Enter the first position : ";
    cin>>pos1;

    cout<<"Enter the second position : ";
    cin>>pos2;

    if(pos1 < 0 || pos1 > 32 || pos2 < 0 || pos2 > 32)
    {
        return 0;
    }

    iRet = ToggleBit(iValue1,pos1,pos2);

    cout<<"Updated number is : "<<iRet<<endl;
}
