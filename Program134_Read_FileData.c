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
  // only read write

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

    printf("%d bytes gets succesfully Read From the file\n",iRet);

    printf("Data from the file is : %s",Data);
    // print data till '\0'

}
