#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

// Open the existing file -> Read Whole file , display

int main()
{
    int fd = 0, iRet = 0;
    char Fname[20];
    char Buffer[1024];    //mug

    printf("Enter the file name : ");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("unable to open file");
        return -1;
    }
    else
    {
        printf("File is successfully opened with FD : %d\n",fd);
    }

    printf("Data from the file is : ");

    while((iRet = read(fd,Buffer,sizeof(Buffer)) ) != 0)
    {
        write(1,Buffer,iRet);
    }
    
    close(fd);

    return 0;
}
