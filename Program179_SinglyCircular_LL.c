

/* 

This program demonstrate the implementation of the SINGLY CIRCULAR Linked List.

This program contains following functions : 
insertFirst() , insertLast() , Display() , count() , deleteFirst() , deleteLast() ,insertAtPos() , deleteAtPos()

*/


/*
void insertFirst(PPNODE Head , PPNODE Tail, int no)
void insertLast(PPNODE Head , PPNODE Tail, int no)
void insertAtPos(PPNODE Head, PPNODE Tail, int no , int pos)

void deleteFirst(PPNODE Head,PPNODE Tail, );
void deleteLast(PPNODE Head,PPNODE Tail, );
void deleteAtPos(PPNODE Head ,PPNODE Tail,  int pos);

void Display(PNODE Head, PNODE Tail);

int Count(PNODE Head , PNODE Tail);
*/

////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;

}NODE , * PNODE, ** PPNODE;

///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////

void Display(PNODE Head , PNODE Tail)
{
    if((Head == NULL) && (Tail == NULL))
    {
        return;
    }

    do
    {
        printf("|%d|->",(Head->data));
        Head = Head->next;
    } while ((Head != (Tail->next)));
    
    printf("NULL\n");
}

///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////

int Count(PNODE Head , PNODE Tail)
{
    int iCnt = 0;

    if((Head == NULL) && (Tail == NULL))
    {
        return 0;
    }

    do
    {
        iCnt++;
        Head = Head->next;
    }while((Head != (Tail->next)));

    return iCnt;
}

///////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void insertFirst(PPNODE Head , PPNODE Tail , int no)
{
    PNODE newn = NULL;

    // new node created
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))  // if List is empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
    (*Tail)->next = newn;   // to maintain circular nature
    // common for if & else
    // most important
}

//////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////

void insertLast(PPNODE Head , PPNODE Tail, int no)
{
    PNODE newn = NULL;

    // new node created
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))  // if List is empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail)->next = newn;
        *Tail = newn;
    }
    (*Tail)->next = *Head;  // To mainatain circular nature
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void insertAtPos(PPNODE Head , PPNODE Tail , int pos , int no)
{
    int size = 0;
    
    size = Count(*Head,*Tail);
    
    if((pos < 1) || (pos > (size+1)))
    {
        printf("Invalid position\n");
        return;
    }

    if(pos == 1)
    {
        insertFirst(Head,Tail,no);
    }
    else if(pos == (size+1))
    {
        insertLast(Head,Tail,no);
    }
    else
    {
        PNODE newn = NULL;
        
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        PNODE temp = *Head;

        for(int iCnt = 1; iCnt < pos-1 ; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void deleteFirst(PPNODE Head , PPNODE Tail)
{
    if((*Head==NULL) && (*Tail==NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next = *Head;
    }
}

/////////////////////////////////////////////////////////////////
//////////////////////////// ///////////////////////////////////////

void deleteLast(PPNODE Head , PPNODE Tail)
{
    PNODE temp = NULL;
    temp = *Head;

    if((*Head==NULL) && (*Tail==NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        while(((temp->next) != (*Tail)))
        {
            temp = temp->next;
        }
        
        free(*Tail);
        *Tail = temp;
        (*Tail)->next = *Head;
    }
}

/////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

void deleteAtPos(PPNODE Head , PPNODE Tail , int pos)
{
    int size = 0;

    size = Count(*Head,*Tail);    // number of elements

    if((pos < 1) || (pos > size))
    {
        printf("invalid position");
        return;
    }

    if(pos == 1)   // for first position
    {
        deleteFirst(Head,Tail);
    }
    else if(pos == (size))   // for last position
    {
        deleteLast(Head,Tail);
    }
    else    // position is in between first & last position
    {
        PNODE temp = *Head;
        PNODE targeted = NULL;

        for(int iCnt = 1 ; iCnt < pos-1 ; iCnt++)
        {
            temp = temp->next;
        }

        targeted = temp->next;
        temp->next = temp->next->next;
        free(targeted);

    }
}

/////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////

int main()
{
    PNODE first = NULL;
    PNODE last = NULL; 

    int iRet = 0;

    insertFirst(&first , &last , 51);
    insertFirst(&first , &last , 21);
    insertFirst(&first , &last , 11);

    insertLast(&first, &last, 101);
    
    Display(first,last);
    iRet = Count(first,last);

    printf("\nCount is : %d\n",iRet);

    printf("\n");

    insertAtPos(&first , &last , 3 , 501);

    Display(first,last);
    iRet = Count(first,last);

    printf("\nCount is : %d\n",iRet);

    printf("\n");

    deleteFirst(&first , &last);

    Display(first,last);
    iRet = Count(first,last);

    printf("\nCount is : %d\n",iRet);

    printf("\n");

    deleteLast(&first , &last);

    Display(first,last);
    iRet = Count(first,last);

    printf("\nCount is : %d\n",iRet);

    printf("\n");

    deleteAtPos(&first , &last , 2);

    Display(first,last);
    iRet = Count(first,last);

    printf("\nCount is : %d\n",iRet);

    return 0;
}
