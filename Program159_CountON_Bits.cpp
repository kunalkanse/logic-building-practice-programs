#include<iostream>
using namespace std;

// Count On Bits

typedef unsigned int UINT;

UINT CountONBit(UINT iNo)
{
    int iCnt = 0;
    UINT iMask = 0x00000001;
    UINT iResult = 0;

    for(int i = 0; i < 32 ; i++)
    {
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            iCnt++;
        }

        iMask = iMask << 1;
    }

    return iCnt;

}

int main()
{
    UINT iValue1 = 0,iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue1;

    iRet = CountONBit(iValue1);

    cout<<"Count of ON Bits is : "<<iRet<<endl;
}
