#include<iostream>
#include<stdio.h>

using namespace std;

typedef struct node
{
    int data;
    struct node * next;
}NODE, *PNODE, ** PPNODE;

void InsertFirst_I(PPNODE Head, int no)
{
    PNODE newn = new NODE;
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

void Display_I(PNODE Head)
{
    while(Head != NULL)
    {
        cout<<"|"<<Head->data<<"|-> ";
        Head = Head -> next;
    }
    cout<<"\n";
}

int Count_I(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

void Display_R(PNODE Head)
{
    if(Head != NULL)
    {
        cout<<"|"<<Head->data<<"|-> ";
        Head = Head -> next;

        Display_R(Head);
    }
    
}

int Count_R(PNODE Head)
{
    static int iCnt = 0;
    
    if(Head != NULL)
    {
        iCnt++;
        Head = Head->next;

        Count_R(Head);
    }
    return iCnt;
}

/////////////////////////////////////////////////////////

int main()
{
    PNODE first = NULL;
    int iRet = 0;
    
    InsertFirst_I(&first, 101);
    InsertFirst_I(&first, 51);
    InsertFirst_I(&first, 21);
    InsertFirst_I(&first,11);
    
    cout<<"\n";
    Display_R(first);
    
    iRet = Count_R(first);
    
    cout<<"\n\nNumber of elements are "<<iRet<<"\n";
    
    return 0;
}
