
#include<stdio.h>
#include<stdlib.h>

// this program demonstrate the implementation of the
// doubly linear linked list.


typedef struct node
{
    int data;
    struct node * next;
    struct node * prev;

}NODE , * PNODE , ** PPNODE ;


// function declerations
void insertFirst(PPNODE , int);
void insertLast(PPNODE , int);
void Display(PNODE);
int Count(PNODE);

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void Display(PNODE Head)
{
    printf("\n");
    while(Head != NULL)
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    }
    printf("NULL");
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }

    return iCnt;
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void insertFirst(PPNODE Head , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void insertLast(PPNODE Head , int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head == NULL)   // if list is empty
    {
        *Head = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    insertFirst(&first,51);
    insertFirst(&first,21);
    insertFirst(&first,11);

    insertLast(&first , 101);

    Display(first);

    iRet = Count(first);
    printf("\n\nList contains %d elements\n\n",iRet);

    return 0;
}
