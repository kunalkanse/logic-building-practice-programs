#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

using namespace std;

class Program187
{

public:
    char Fname[30];
    int fd = 0;

    Program187(char * Name)
    {
        cout<<"inside Constructor\n";
        strcpy(Fname,Name);

        fd = open(Fname, O_RDWR);
    }

    ~Program187()
    {
        close(fd);
    }

    void Display()
    {
        int iRet = 0;
        char Buffer[10];

        lseek(fd, 0, 0);

        cout<<"Data from the file is : ";
        while((iRet = read(fd,Buffer,10)) != 0)
        {
            write(1,Buffer,iRet);
        }

        cout<<endl;
    }

    int CountCapital()
    {
        int iCnt = 0,iRet = 0;
        char Buffer[10];

        lseek(fd , 0 , 0);

        while((iRet = read(fd,Buffer,10)) != 0)
        {
            for(int i = 0; i< iRet ; i++)
            {
                if(Buffer[i] >= 'A' && Buffer[i] <= 'Z')
                {
                    iCnt++;
                }
            }
        }

        return iCnt;

    }

    int CountSmall()
    {
        int iCnt = 0,iRet = 0;
        char Buffer[10];

        lseek(fd , 0 , 0);

        while((iRet = read(fd,Buffer,10)) != 0)
        {
            for(int i = 0; i< iRet ; i++)
            {
                if(Buffer[i] >= 'a' && Buffer[i] <= 'z')
                {
                    iCnt++;
                }
            }
        }

        return iCnt;

    }

    int CountDigits()
    {
        int iCnt = 0,iRet = 0;
        char Buffer[10];

        lseek(fd , 0 , 0);

        while((iRet = read(fd,Buffer,10)) != 0)
        {
            for(int i = 0; i< iRet ; i++)
            {
                if(Buffer[i] >= '0' && Buffer[i] <= '9')
                {
                    iCnt++;
                }
            }
        }

        return iCnt;

    }

};

int main()
{
    int iRet = 0;
    char name[30];

    cout<<"Enter the file name : ";
    cin>>name;

    Program187 obj(name);

    obj.Display();

    iRet = obj.CountCapital();
    cout<<"\nCount of Capital letter is : "<<iRet<<endl;

    iRet = obj.CountSmall();
    cout<<"\nCount of small letter is : "<<iRet<<endl;

    iRet = obj.CountDigits();
    cout<<"\nCount of Digits is : "<<iRet<<endl;
}
