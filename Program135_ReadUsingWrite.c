#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

// Open the existing file -> write

int main()
{
    int fd = 0;
    int iRet = 0;
    char Fname[20];
    char Data[50];

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

    iRet = read(fd, Data ,6);

    write(1,Data,iRet);

    close(fd);

    return 0;
}
