
// Reverse the linkded list in place

#include<stdlib.h>
#include<stdio.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE , * PNODE , ** PPNODE;

///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
void inserFirst(PPNODE Head , int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    
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
///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}
///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
void ReverseLL(PPNODE head)
{
    PNODE front = NULL, back = NULL, current = *head;

    while(current != NULL)
    {
        front = current->next;
        current->next = back;
        back = current;
        current = front;
    }

    *head = back;
}

///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////

int main()
{
    PNODE first = NULL;

    inserFirst(&first , 50);
    inserFirst(&first , 40);
    inserFirst(&first , 30);
    inserFirst(&first , 20);
    inserFirst(&first , 10);

    Display(first);

    printf("\nLinked List after Reverse\n");
    ReverseLL(&first);

    Display(first);

    return 0;
}
