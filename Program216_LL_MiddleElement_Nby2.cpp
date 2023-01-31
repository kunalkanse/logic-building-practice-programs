
#include<stdlib.h>
#include<stdio.h>

typedef struct node
{
    int EmpId;
    struct node *next;
} NODE , * PNODE , ** PPNODE;


void inserFirst(PPNODE Head , int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->EmpId = no;
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

int middleElement(PNODE Head)
{
    PNODE fast = NULL , slow = NULL;

    if(Head == NULL)
    {
        printf("LL in empty");
        return -1;
    }

    fast = Head;
    slow = Head;

    while((fast != NULL) && ((fast->next) != NULL))
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow->EmpId;
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d|->",Head->EmpId);
        Head = Head->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    //inserFirst(&first , 110);
    inserFirst(&first , 100);
    inserFirst(&first , 90);
    inserFirst(&first , 80);
    inserFirst(&first , 70);
    inserFirst(&first , 60);
    inserFirst(&first , 50);
    inserFirst(&first , 40);
    inserFirst(&first , 30);
    inserFirst(&first , 20);
    inserFirst(&first , 10);

    Display(first);

    iRet = middleElement(first);
    printf("\nMiddle Element is : %d",iRet);
    return 0;
}
