


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// Size of the file

int main()
{
    int fd = 0, iSum = 0 , iRet = 0;

    char Fname[20];
    char Buffer[10];

    printf("Enter the file name : ");
    scanf("%s",Fname);

    fd = open(Fname , O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file");
        return 0;
    }

    while((iRet = read(fd , Buffer , 10)) != 0)
    {
        iSum = iSum + iRet;
    } 

    printf("Size of the file is : %d",iSum);

    close(fd);

    return 0;
}
