#include<iostream>
using namespace std;

class Program186
{
    public:
        int Addition(int x , int y)
        {
            int iAns = 0;
            iAns = x + y;
            return iAns;
        }
};


int main()
{
    Program186 obj;
    // Program186 obj = new Program186();

    int iNo1 = 0, iNo2 = 0, iRet = 0;

    cout<<"Enter the first number : ";
    cin>>iNo1;

    cout<<"Enter the second number : ";
    cin>>iNo2;

    iRet = obj.Addition(iNo1,iNo2);

    cout<<"Addition of Two Numbers : "<<iRet<<endl;

    return 0;
}
