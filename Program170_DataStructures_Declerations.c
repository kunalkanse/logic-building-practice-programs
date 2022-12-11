
#include<stdio.h>
#include<stdlib.h>

//structure decleration, self referential structure
struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    PNODE First = NULL; // pointer for structure
    //struct node * First = NULL;

    return 0;
}
