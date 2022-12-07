

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// To create hole in the file
 
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

    // 0    From starting position
    // 1    From Current position
    // 2    From end of the file

    lseek(fd , 10, 2);

    write(fd, "*" ,1);

    printf("\n");

    close(fd);

    return 0;
}
