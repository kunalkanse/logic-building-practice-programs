
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// lseek

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

    lseek(fd , -5, 2);
    read(fd, Data , 5);
    write(1,Data,5);

    printf("\n");

    close(fd);

    return 0;
}
