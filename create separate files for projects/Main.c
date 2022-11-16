/////////////////////////////////////////////////////////////////
//
//  Accept 2 numbers from user and perform the addition
//
//////////////////////////////////////////////////////////////////

#include "Header.h"               // User defined header file inclusion


// Entry point function
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;     // Local varibles
    
    printf("Enter first number\n");
    scanf("%d",&iValue1);                   // Accepting the input
    
    printf("Enter second number\n");
    scanf("%d",&iValue2);                // Accepting the input
    
    iRet = Addition(iValue1, iValue2);  // Function call
    
    printf("Addition is : %d\n",iRet);
    
    return 0;   // Return sucess to OS
}
