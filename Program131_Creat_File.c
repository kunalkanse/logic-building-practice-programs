#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

// create file , input file name

int main()
{
    int fd = 0;
    char Fname[20];

    printf("Enter the file name : ");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("unable to create file");
    }
    else
    {
        printf("successfully created fil");
    }
}
