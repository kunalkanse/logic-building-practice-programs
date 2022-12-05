#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

// Open the existing file &  write in it

int main()
{
    int fd = 0;
    int iRet = 0;
    char Fname[20];
    char Data[50] = "Marvellous infosystems";

    printf("Enter the file name : ");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("unable to open file");
        return -1;
    }
    else
    {
        printf("File is successfully opened with FD : %d\n",fd);
    }

    iRet = write(fd, Data, 22);

    printf("%d bytes gets succesfully written in the file\n",iRet);
}
