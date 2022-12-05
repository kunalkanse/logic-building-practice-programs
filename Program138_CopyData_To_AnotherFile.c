#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

// Copy one file data into another file

int main()
{
    int fdSrc = 0, fdDest = 0 ,iRet = 0;
    char Fname1[20];
    char Fname2[20];

    char Buffer[1024];    //mug

    printf("Enter the Source file name : ");
    scanf("%s",Fname1);

    printf("Enter the Destination file name : ");
    scanf("%s",Fname2);

    fdDest = creat(Fname2,0777);

    fdSrc = open(Fname1,O_RDONLY);
    fdDest = open(Fname2,O_RDWR);

    if((fdSrc == -1) || (fdDest == -1))
    {
        printf("unable to open files");
        return -1;
    }
    else
    {
        printf("Files are successfully opened");
    }

    while((iRet = read(fdSrc,Buffer,sizeof(Buffer)) ) != 0)
    {
        write(fdDest,Buffer,iRet);
    }
    
    close(fdSrc);
    close(fdDest);

    return 0;
}
