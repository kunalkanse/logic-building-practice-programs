#include<iostream>
using namespace std;

typedef unsigned int UINT;

// Display Seperate bytes

int DisplayByte(UINT iNo)
{
    UINT Byte1 = iNo & 0x000000ff;
    
    UINT Byte2 = iNo & 0x0000ff00;
    Byte2 = Byte2 >> 8;

    UINT Byte3 = iNo & 0x00ff0000;
    Byte3 = Byte3 >> 16;

    UINT Byte4 = iNo & 0x000000ff;
    Byte4 = Byte4 >> 24;

    cout<<"Byte1 = "<<Byte1<<endl;
    cout<<"Byte2 = "<<Byte2<<endl;
    cout<<"Byte3 = "<<Byte3<<endl;
    cout<<"Byte4 = "<<Byte4<<endl;

}

int main()
{
    UINT iValue = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    DisplayByte(iValue);

    return 0;
}
