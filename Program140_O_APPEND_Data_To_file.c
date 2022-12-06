#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// write data at end of file

int main()
{
    int fd = 0;
    char Data[] = "Hello";

    fd = open("FileHandling.txt" , O_RDWR | O_APPEND);

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
