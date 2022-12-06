#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// write data to file  , overwrite data on existin data

int main()
{
    int fd = 0;
    char Data[] = "Hello";

    fd = open("FileHandling.txt" , O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file");
        return 0;
    }
    else
    {
        printf("File is successfully opened");
    }

    write(fd, Data , 5);

    close(fd);
 
    return 0;
}
