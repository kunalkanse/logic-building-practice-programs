


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// Count vowels of file

int main()
{
    int fd = 0, iCnt = 0 , iRet = 0;

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
        for(int i = 0; i < iRet ; i++)
        {
            if((Buffer[i] == 'a') || (Buffer[i] == 'e') || (Buffer[i] == 'i') || (Buffer[i] == 'o') || (Buffer[i] == 'u'))
            {
                iCnt++;
            }
        }
    } 

    printf("total count of vowels is : %d",iCnt);

    close(fd);

    return 0;
}
