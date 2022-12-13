
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

void deletefirst(PPNODE);
void deleteLast(PPNODE);

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

void deleteFirst(PPNODE Head)
{
    
    if(*Head != NULL)
    {
        if((*Head)->next == NULL)
        {
            free(*Head);
            *Head = NULL;
        }
        else
        {
            *Head = (*Head)->next;
            free((*Head)->prev);
            (*Head)->prev = NULL;
        }
    }
}

void deleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->prev->next = NULL;
        free(temp);
    }
}

void insertAtPos(PPNODE Head , int no, int pos)
{
    int size = Count(*Head);
    int iCnt = 0;

    PNODE temp = *Head;
    PNODE newn = NULL;

    if((pos < 1) || (pos > size+1))
    {
        printf("Invalid position");
        return;
    }

    if(pos == 1)
    {
        insertFirst(Head , no);
    }
    else if(pos == size+1)
    {
        insertLast(Head , no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        for(iCnt = 1; iCnt < (pos-1) ; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp;

        temp->next->prev = newn;
        temp->next = newn;
    }
}

void deleteAtPos(PPNODE Head , int pos)
{
    int size = Count(*Head);
    int iCnt = 0;

    PNODE temp = *Head;
 
    if((pos < 1) || (pos > size))
    {
        printf("Invalid position");
        return;
    }

    if(pos == 1)
    {
        deleteFirst(Head);
    }
    else if(pos == size+1)
    {
        deleteLast(Head);
    }
    else
    {
        
        for(iCnt = 1; iCnt < (pos-1) ; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
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

    insertAtPos(&first , 501 , 4);

    Display(first);

    iRet = Count(first);
    printf("\n\nList contains %d elements\n\n",iRet);

    deleteFirst(&first);

    Display(first);

    iRet = Count(first);
    printf("\n\nList contains %d elements\n\n",iRet);

    deleteLast(&first);

    Display(first);

    iRet = Count(first);
    printf("\n\nList contains %d elements\n\n",iRet);

    deleteFirst(&first);

    Display(first);

    iRet = Count(first);
    printf("\n\nList contains %d elements\n\n",iRet);

    deleteLast(&first);

    Display(first);

    iRet = Count(first);
    printf("\n\nList contains %d elements\n\n",iRet);

    return 0;
}
