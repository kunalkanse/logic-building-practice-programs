
//create a new file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
    int fd = 0; // file descriptor

    fd = creat("FileHandling.txt",0777);
                // (file name, permissions)

    if(fd = -1)
    {
        printf("Unable to create file");
    }
    else
    {
        printf("file in created successfully");
    }

    return 0;
}
