#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// read data

int main()
{
    int fd = 0;
    char Data[10];

    fd = open("FileHandling.txt" , O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }
    else
    {
        printf("File is successfully opened\n");
    }

    read(fd, Data , 5);

    printf("Data from file is : ");
    write(1,Data,5);

    close(fd);

    return 0;
}
