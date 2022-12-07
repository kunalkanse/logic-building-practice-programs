#include<iostream>
using namespace std;

//toggle First & Last Nibbble

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xf000000f;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue1 = 0, iRet = 0;

    iRet = ToggleBit(iValue1);

    cout<<"Updated number is : "<<iRet<<endl;
}
