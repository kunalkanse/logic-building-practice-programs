

/* 

This program demonstrate the implementation of the DOUBLY CIRCULAR Linked List in C++.

This program contains following functions : 
insertFirst() , insertLast() , Display() , count() , deleteFirst() , deleteLast() ,insertAtPos() , deleteAtPos()

*/


/*
void insertFirst(int no)
void insertLast(int no)
void insertAtPos(int no , int pos)

void deleteFirst();
void deleteLast();
void deleteAtPos(int pos);

void Display();

int Count();
*/

#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node * next;
    struct node * prev;

}NODE , * PNODE;

class DoublyCL
{
    private:
        PNODE first;
        PNODE last;
        int size;

    public:
        DoublyCL()
        {
            first = NULL;
            last = NULL;
            size = 0;
        }

////////////////////////////////////////////////////////
// function declerations

        void Display();
        int Count();

        void insertFirst(int);
        void insertLast(int);
        void insertAtPos(int , int);

        void deleteFirst();
        void deleteLast();
        void deleteAtPos(int);
};

////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////

void DoublyCL :: Display()
{
    PNODE temp = first;

    for(int iCnt = 1; iCnt <= size ; iCnt++)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }

    cout<<"NULL";
}

////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

int DoublyCL :: Count()
{
    return size;
}

/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

void DoublyCL :: insertFirst(int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((first==NULL) && (last==NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;

        first = newn;
    } 

    first->prev = last;
    last->next = first;

    size++;
}

///////////////////////////////////////////////////////
////////////////////////////////////////////////////////

void DoublyCL :: insertLast(int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((first==NULL) && (last==NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        newn->prev = last;
        last = newn;
    }

    first->prev = last;
    last->next = first;

    size++;
}

/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

void DoublyCL :: insertAtPos(int pos , int no)
{
    if((pos<1) || (pos>(size+1)))
    {
        cout<<"invalid position";
        return;
    }

    if(pos == 1)
    {
        insertFirst(no);
    }
    else if(pos == (size+1))
    {
        insertLast(no);
    }
    else
    {
        PNODE temp = first;

        PNODE newn = new NODE;

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        for(int iCnt = 1 ; iCnt < (pos-1) ; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->next->prev = newn;
        
        temp->next = newn;
        newn->prev = temp;

        size++;
    }
}

///////////////////////////////////////////////////////
//////////////////////////////////////////////////////////

void DoublyCL :: deleteFirst()
{
    if((first==NULL) && (last==NULL))
    {
        return;
    }
    else if((first==last))
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete last->next;

        first->prev = last;
        last->next = first;
    }

    size--;
}

////////////////////////////////////////////////////////
////////////////////////////////////////////////////////

void DoublyCL :: deleteLast()
{
    if((first==NULL) && (last==NULL))
    {
        return;
    }
    else if((first == last))
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        last = last->prev;
        delete last->next;

        first->prev = last;
        last->next = first;
    }

    size--;
}

////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

void DoublyCL :: deleteAtPos(int pos)
{
    if((pos<1) || (pos>(size)))
    {
        cout<<"invalid position";
        return;
    }

    if(pos == 1)
    {
        deleteFirst();
    }
    else if(pos == (size))
    {
        deleteLast();
    }
    else
    {
        PNODE temp = first;

        for(int iCnt = 1 ; iCnt < (pos-1) ; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;

        delete temp->next->prev;

        temp->next->prev = temp;

        size--;
    }
}

int main()
{
    DoublyCL dobj;
    int iRet = 0;

    dobj.insertFirst(51);
    dobj.insertFirst(21);
    dobj.insertFirst(11);

    dobj.insertLast(101);

    cout<<endl;

    dobj.Display();

    iRet = dobj.Count();
    cout<<"\ncount is : "<<iRet<<endl;

    dobj.insertAtPos(3,501);

    cout<<endl;

    dobj.Display();

    iRet = dobj.Count();
    cout<<"\ncount is : "<<iRet<<endl;

    cout<<endl;

    dobj.deleteFirst();
    dobj.deleteLast();

    dobj.Display();

    iRet = dobj.Count();
    cout<<"\ncount is : "<<iRet<<endl;

    dobj.deleteAtPos(2);

    cout<<endl;

    dobj.Display();

    iRet = dobj.Count();
    cout<<"\ncount is : "<<iRet<<endl;

    return 0;
}
