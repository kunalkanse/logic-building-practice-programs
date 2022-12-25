#include<iostream>
using namespace std;

// normal iterative function
void DisplayI(int iNo)
{
    int iCnt = 1;
    
    while(iCnt <= iNo)
    {
        cout<<"Marvellous\n";
        iCnt++;
    }
}

// convering Normal iterative function to Recurcive function
// Recursive function
void DisplayR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        cout<<"Marvellous\n";
        iCnt++;

        DisplayR(iNo);
    } 
}


int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayR(iValue);

    return 0;
}
