
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

/*
if any function going to change the data of the linked list then use the call y address.
e.g. insertFirst() , insertLast() , insertAtPos() , deletFirst(), deleteLast() , deleteAtPos()

else use call by value.
e.g. - Display() , Count()
*/

void fun(PNODE p)
{

}

void gun(PPNODE q)
{

}


int main()
{
    PNODE First = NULL;

    // call by value
    fun(First); // fun(100)     Display() , Count()


    // call by address
    gun(&First);    // gun(50)   InsertFirst(), InsertLast(), InsertAtPos(), DeleteFirst(), DeleteLast(), DeleteAtPso()

    return 0;
}
