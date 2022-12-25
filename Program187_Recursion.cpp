#include<iostream>
using namespace std;

// normal iterative function

void DisplayI()
{
    int iCnt = 1;
    
    while(iCnt <= 4)
    {
        cout<<"Marvellous\n";
        iCnt++;
    }
}

// convering Normal iterative function to Recurcive function
// Recurcive function

void DisplayR()
{
    static int iCnt = 1;

    if(iCnt <= 4)
    {
        cout<<"Marvellous\n";
        iCnt++;

        DisplayR();
    }

}

int main()
{
    DisplayR();

    return 0;
}
