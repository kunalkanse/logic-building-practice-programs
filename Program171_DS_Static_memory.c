
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
    NODE obj;

    obj.data = 11;
    obj.next = NULL;

    PNODE p = NULL;
    p = &obj;

    PPNODE q = NULL;
    q = &p;

    return 0;
}

/*
    p                       100
    q                       200
    &p                      200
    &q                      300
    p->data             	11
    p->next             	NULL
    *q                      100
   (*q)->data;         		11
   (*q)->next;         		NULL
 */
