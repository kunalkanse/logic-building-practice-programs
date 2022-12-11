
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    PNODE p = NULL;
    PPNODE q = NULL;

    // dynamic memory allocation
    p = (PNODE)malloc(sizeof(NODE));

    q = &p;

    return 0;
}
