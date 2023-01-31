
#include<stdlib.h>
#include<stdbool.h>
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

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d|->",Head->EmpId);
        Head = Head->next;
    }
    printf("NULL\n");
}

bool CheckLoop(PNODE Head)
{
    bool flag = false;

    PNODE fast = Head;
    PNODE slow = Head;

    while((fast != NULL) && (fast->next != NULL) && (slow != NULL))
    {
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow)
        {
            flag = true;
            break;
        }

    }

    return flag;
}

int main()
{
    PNODE first = NULL;
    PNODE temp1 , temp2;
    bool bRet = false;

    inserFirst(&first , 60);
    inserFirst(&first , 50);
    inserFirst(&first , 40);
    inserFirst(&first , 30);
    inserFirst(&first , 20);
    inserFirst(&first , 10);

    temp1 = first;
    temp2 = first;

////////////////////////////////////////////
// creating loop
    while((temp1->next) != NULL)
    {
        temp1 = temp1->next;
    }

    temp2 = temp2->next->next;

    temp1->next = temp2;

// in loop , last node pointing to third node
/////////////////////////////////////////////

    bRet = CheckLoop(first);    // call by value
    if(bRet == true)
    {
        printf("Loop is detected");
    }
    else
    {
        printf("There is no Loop");
    }

    //Display(first);

    return 0;
}
